#ifndef MAIN_OBJECT_H
#define MAIN_OBJECT_H
#include "CommonFunction.h"
#include "BaseObject.h"
#include "AmoObject.h"
#include <vector>
#define WIDTH_MAIN_OBJECT 64
#define HEIGHT_MAIN_OBJECT 91

class MainObject :public BaseObject {
public:
	MainObject();
	~MainObject();

	void HandleInputAction(SDL_Event events);
	void HandleMove();
	void SetAmoList(std::vector<AmoObject*> amo_list) { p_amo_list_ = amo_list; }
	std::vector<AmoObject*> GetAmoList() const { return p_amo_list_; }
private:
	int x_val_;
	int y_val_;

	std::vector<AmoObject*> p_amo_list_;
};
#endif //MAIN_OBJECT_H
