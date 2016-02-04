
#include "EngineItemState.h"

EngineItemState::EngineItemState(std::string *name, int framesPerSprite, EngineSprite n_sprites, ...) {
	this->_stateName = name;
	this->_sprites = std::vector<EngineSprite>();
}

EngineItemState::~EngineItemState() {

}

std::string * EngineItemState::getName() {
	return  this->_stateName;
}