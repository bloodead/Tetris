#include "base.h"

void	piece5_rot1(struct s_piece* piece)
{
	piece->x = piece->x2 + 1;
	piece->x1 = piece->x2 + 1;
	piece->x3 = piece->x2;
	piece->y = piece->y2 - 1;
	piece->y1 = piece->y2;
	piece->y3 = piece->y2 + 1;
	piece->rot = 1;
}

void	piece5_rot0(struct s_piece* piece)
{
	piece->x = piece->x2 - 1;
	piece->x1 = piece->x2 + 1;
	piece->x3 = piece->x2;
	piece->y = piece->y2;
	piece->y1 = piece->y2 + 1;
	piece->y3 = piece->y2 + 1;
	piece->rot = 0;
}
