bool fcn(const Sales_data *trans, Sales_data accum) {
	Sales_data item1(*trans), item2(accum);
	return item1.isbn() != item2.isbn();
	// 2-nd accum;
	// 3-rd item1;
	// 4-th item2;
}
