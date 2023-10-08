string null_isbn("9-999-99999-9");
Sales_data item1(null_isbn); // string constructor make item1
Sales_data item2("9-999-99999-9"); // implicit conversion from literal to string, then string constructor make item2
