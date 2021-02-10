#pragma once

class Object
{
public:
	virtual const char* ToString();
	virtual const char* ToString(char* const buffer);
	Object();
};

