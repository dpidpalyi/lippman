#ifndef MESSAGE_FOLDER
#define MESSAGE_FOLDER

#include <string>
#include <set>
#include <iostream>

class Folder;

class Message {
	friend class Folder;
	friend void swap(Message &, Message &);
	friend void swap(Folder &, Folder &);
	public:
	// folder is implicitly initialized to the empty set
	explicit Message(const std::string &str = ""):
		contents(str) {}
	// copy control to manage pointers to this Message
	Message(const Message&);
	Message(Message&&);
	Message& operator=(const Message&);
	Message& operator=(Message&&);
	~Message();
	// add/remove this Message from the specified Folder's set of messages
	void save(Folder&);
	void remove(Folder&);
	void print();
	private:
	std::string contents;	   // actual message text
	std::set<Folder*> folders; // Folders that have this Message
	// utility functions used by copy constructor, assignment, and destr-r
	// add this Message to the Folders that point to the parameter
	void add_to_Folders(const Message&);
	// remove this Message from every Folder in folders
	void remove_from_Folders();
	// move this Message from every Folder in folders
	void move_Folders(Message *m);

	void addFldr(Folder *f) { folders.insert(f); }
	void remFldr(Folder *f) { folders.erase(f); }

};

void swap(Message &, Message&);

class Folder {
	friend class Message;
	friend void swap(Message &, Message &);
	friend void swap(Folder &, Folder &);
	public:
	explicit Folder(const std::string &str = ""):
		name(str) {}
	Folder(const Folder&);
	Folder& operator=(const Folder&);
	~Folder();
	void print();
	private:
	std::string name;
	std::set<Message*> messages;
	void add_to_Messages(const Folder &f);
	void remove_from_Messages();

	void addMsg(Message *m) { messages.insert(m); }
	void remMsg(Message *m) { messages.erase(m); }
};

void Folder::add_to_Messages(const Folder &f) {
	for (auto m : f.messages)
		m->addFldr(this);
}

Folder::Folder(const Folder &f): name(f.name), messages(f.messages) {
	add_to_Messages(f);
}

void Folder::remove_from_Messages() {
	for (auto m : messages) // for each pointer in messages
		m->remFldr(this); // remove this Folder from that Message
	messages.clear(); // no Message points to this Folder
}

Folder::~Folder() {
	remove_from_Messages();
}

Folder& Folder::operator=(const Folder &rhs) {
	// handle self-assignment by removing pointers before inserting them
	remove_from_Messages();	 // update existing Messages
	name = rhs.name; // copy name contents from rhs
	messages = rhs.messages;	 // copy Message pointers from rhs
	add_to_Messages(rhs);	 // add this Folder to those Messages
	return *this;
}

void Folder::print() {
	std::cout << "Folder: " << name << std::endl;
	for (const auto &m : messages)
		std::cout << m->contents << " ";
	std::cout << std::endl;
}

void Message::save(Folder &f) {
	folders.insert(&f); // add the given Folder to out list of Folders(set)
	f.addMsg(this);	// add this Message to f's set of Messages
}

void Message::remove(Folder &f) {
	folders.erase(&f); // take the given Folder out of our list of Folders
	f.remMsg(this); // remove this Message of f's set of Messages
}

// add this Message to Folders that point to m
void Message::add_to_Folders(const Message &m) {
	for (auto f : m.folders) // for each Folder that holds m
		f->addMsg(this); // add a pointer to this Message to that Folder
}

Message::Message(const Message &m): contents(m.contents), folders(m.folders) {
	add_to_Folders(m); // add this Message to the Folders that point to m
}

void Message::remove_from_Folders() {
	for (auto f : folders) // for each pointer in folders
		f->remMsg(this); // remove this Message from that Folder
	folders.clear(); // no Folder points to this Message
}

void Message::move_Folders(Message *m) {
	folders = std::move(m->folders);
	for (auto f : folders) {
		f->remMsg(m);
		f->addMsg(this);
	}
	m->folders.clear();
}

Message::Message(Message &&m) : contents(std::move(m.contents)) {
	move_Folders(&m);
}

Message &Message::operator=(Message &&rhs) {
	if (this != &rhs) {
		remove_from_Folders();
		contents = std::move(rhs.contents);
		move_Folders(&rhs);
	}
	return *this;
}

Message::~Message() {
	remove_from_Folders();
}

Message& Message::operator=(const Message &rhs) {
	// handle self-assignment by removing pointers before inserting them
	remove_from_Folders();	 // update existing Folders
	contents = rhs.contents; // copy message contents from rhs
	folders = rhs.folders;	 // copy Folder pointers from rhs
	add_to_Folders(rhs);	 // add this Message to those Folders
	return *this;
}

void swap(Message &lhs, Message &rhs) {
	using std::swap;
	// remove pointers to each Message from their (original) respective Folders
	for (auto f: lhs.folders)
		f->remMsg(&lhs);
	for (auto f: rhs.folders)
		f->remMsg(&rhs);
	// swap the contents and Folder pointer sets
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);
	// add pointers to each Message to their (new) respective Folders
	for (auto f: lhs.folders)
		f->addMsg(&lhs);
	for (auto f: rhs.folders)
		f->addMsg(&rhs);
}

void swap(Folder &lhs, Folder &rhs) {
	using std::swap;
	lhs.remove_from_Messages();
	rhs.remove_from_Messages();
	swap(lhs.messages, rhs.messages);
	lhs.add_to_Messages(lhs);
	rhs.add_to_Messages(rhs);
}

void Message::print() {
	std::cout << "Message: " << contents << std::endl;
	for (const auto &f : folders)
		std::cout << f->name << " ";
	std::cout << std::endl;
}

#endif

int main() {
  Folder f1("/home"), f2("/bin");
  Message m1("m1"), m2("m2"), m3("m3"), m4("m4"), m5("m5");

  m1.save(f1); m2.save(f1); m5.save(f1);
  m3.save(f2); m4.save(f2); m5.save(f2);
  std::cout << "\n===== Message save =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m1.print(); m2.print(); m3.print(); m4.print(); m5.print();

  {
    Message m6(m5);
    std::cout << "\n===== Message copy-constructor =====\n";
    f1.print(); f2.print(); std::cout << std::endl;
    m5.print(); m6.print();

    m6 = m1;
    std::cout << "\n===== Message copy-assignment operator =====\n";
    f1.print(); f2.print(); std::cout << std::endl;
    m5.print(); m6.print();
  }
  std::cout << "\n===== Message destructor =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m5.print();

  swap(m1, m3);
  std::cout << "\n===== Message swap =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m1.print(); m3.print();
  swap(m1, m3);  // swap back

  swap(m1, m1);
  std::cout << "\n===== Message swap self =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m1.print();

  m1.remove(f1); m2.remove(f1); m5.remove(f1);
  m3.remove(f2); m4.remove(f2); m5.remove(f2);
  std::cout << "\n===== Message remove =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m1.print(); m2.print(); m3.print(); m4.print(); m5.print();

  {
    Folder f3(f1);
    std::cout << "\n===== Folder copy-constructor =====\n";
    f1.print(); f2.print(); f3.print(); std::cout << std::endl;
    m1.print(); m2.print(); m3.print(); m4.print(); m5.print();

    f3 = f2;
    std::cout << "\n===== Folder copy-assignment operator =====\n";
    f1.print(); f2.print(); f3.print(); std::cout << std::endl;
    m1.print(); m2.print(); m3.print(); m4.print(); m5.print();
  }
  std::cout << "\n===== Folder destructor =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m1.print(); m2.print(); m3.print(); m4.print(); m5.print();

  swap(f1, f2);
  std::cout << "\n===== Folder swap =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m1.print(); m2.print(); m3.print(); m4.print(); m5.print();
  swap(f1, f2);  // swap back

  swap(f1, f1);
  std::cout << "\n===== Folder swap self =====\n";
  f1.print(); f2.print(); std::cout << std::endl;
  m1.print(); m2.print(); m3.print(); m4.print(); m5.print();

  return 0;
}
