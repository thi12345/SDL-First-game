#include "BaseObject.h"
#include "CommonFunction.h"

BaseObject::BaseObject() {
	rect_.x = 0;
	rect_.y = 0;
	p_object_ = nullptr;
}
BaseObject::~BaseObject() {
	if (p_object_ != nullptr) {
		SDL_FreeSurface(p_object_);
	}
}
bool BaseObject::LoadImg(const char* file_name) {
	p_object_ = SDLCommonFunc::LoadImage(file_name);
	if (p_object_ == nullptr)
		return false;
	return true;
}
void BaseObject::Show(SDL_Surface* des) {
	if (p_object_ != nullptr) {
		SDLCommonFunc::ApplySurface(p_object_, des, rect_.x, rect_.y);

	}
}