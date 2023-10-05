for (int ix = 0; ix != sz; ++ix)
  if (ix != sz)  // unnecessary

    int ix;  // uninitialized
for (; ix != sz; ++ix)

  for (int ix = 0; ix != sz; ++ix, ++sz)  // loops forever
