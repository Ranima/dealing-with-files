#pragma once
#include <string>
#include <iostream>

class AniBase
{
public:
	virtual void doNoise() const = 0;
};

class cow : public AniBase
{
public:
	void doNoise() const override
	{
		std::cout << "Moo!" << std::endl;
	}
};

class dog : public AniBase
{
public:
	void doNoise() const override
	{
		std::cout << "Woof!" << std::endl;
	}
};

class cat : public AniBase
{
public:
	void doNoise() const override
	{
		std::cout << "Mew!" << std::endl;
	}
};

class sheep : public AniBase
{
public:
	void doNoise() const override
	{
		std::cout << "Bah!" << std::endl;
	}
};

class animals : public AniBase
{
public:
	void doNoise() const override
	{
		std::cout << "Bark bark I'm a shark!" << std::endl;
	}
};