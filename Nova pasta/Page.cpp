#include "Page.hpp"

Page::Page() {
	this->page = 0;
}
		
void Page::setPage(int page) {
	this->page = page;
}

int Page::getPage() {
	return this->page;
}
