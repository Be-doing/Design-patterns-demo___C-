#include "DPShapeModel.h"
bool pointInsideRect(DPPoint point, DPRect rect) {
	if (point._x >= rect._point._x && point._y >= rect._point._y) {
		if (point._x <= rect._point._x + rect._size._width &&
			point._y <= rect._point._y + rect._size._height) {
			return true;
		}
	}
	return false;
}