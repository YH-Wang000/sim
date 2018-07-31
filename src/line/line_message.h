#ifndef SIM_LINE_MESSAGE_H
#define SIM_LINE_MESSAGE_H

#include <string>
#include "core/message.h"
#include "util/buffer.h"

class LineMessage : public Message
{
public:
	std::string text() const;
	void text(const std::string &s);
	
	virtual Buffer* encode();
	
private:
	std::string _text;
};

#endif
