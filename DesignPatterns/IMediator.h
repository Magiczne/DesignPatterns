#pragma once

class IMediator
{
public:
	virtual void sendMessage(std::string name, std::string message) = 0;

	virtual ~IMediator() = default;
};