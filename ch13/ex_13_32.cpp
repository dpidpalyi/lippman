#ifndef MESSAGE_H
#define MESSAGE_H

class Folder;

class Message {
	// folders is implicitly initialized to the empty set
	friend class Folder;
public:
	explicit Message(const std::string &str = ""): contents(str) {}
	// copy control to manage pointers to this Message
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	// add/remove this Message from the specified Folder's set of messages
	void save(Folder&);
	void remove(Folder&);
private:
	std::string contents;			 // actual message text
	std::set<Folder*> folders; // Folders that have this message
	// utility functions used by copy constructor, assignment, and destructor
	// add this Message to the Folders that point to the parameter
	void add_to_Folders(const Message&);
	// remove this Message from every Folder in folders
	void remove_from_Folders();
};
	
#endif
