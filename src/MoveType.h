#ifndef MOVETYPE_H
#define MOVETYPE_H

enum MoveType {
  NORMAL,
  PROMOTION = 1 << 14,
  ENPASSANT = 2 << 14,
  CASTLING  = 3 << 14
};

#endif // MOVETYPE_H
