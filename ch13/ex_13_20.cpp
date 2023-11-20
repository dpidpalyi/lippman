TextQuery:
  shared_ptr file will be the same file, incr reference counter on copy, assign and decrement on destroy;
  map wm will be new on copy, assign and it will destroy own map on destroy;
QueryResult:
  string will be new on copy, assign and it will destroy own string on destroy;
  lines and file same as TextQuery::file shared_ptr;



    Copy TextQuery or QueryResult

    The data member (built-in type, class type, smart pointer and container) of the class is copyed, in which the smart pointer is copyed and the reference count is increased.

    Assign TextQuery or QueryResult

    The data member (built-in type, class type, smart pointer and container) of the class is copyed, in which the smart pointer is copyed and the new reference count is increased, the old reference count is decreased.

    Destory TextQuery or QueryResult

    The data member (built-in type, class type, smart pointer and container) of the class is destroyed, in which the smart pointer is destroyed and the reference count is decreased.


