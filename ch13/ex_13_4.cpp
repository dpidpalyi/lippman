Point global;
Point foo_bar(Point arg) { // 1-st use of copy constructor for Point arg
	Point local = arg, *heap = new Point(global); // 2-nd use for local, 3-rd can use for *heap;
	*heap = local;
	Point pa[4] = { local, *heap }; // 4-th and 5-th use for each element in array
	return *heap; // 6-th use to return value;
}
