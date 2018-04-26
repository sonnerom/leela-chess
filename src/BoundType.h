#ifndef BOUNDTYPE_H
#define BOUNDTYPE_H

enum Bound {
  BOUND_NONE,
  BOUND_UPPER,
  BOUND_LOWER,
  BOUND_EXACT = BOUND_UPPER | BOUND_LOWER
};

#endif // BOUNDTYPE_H
