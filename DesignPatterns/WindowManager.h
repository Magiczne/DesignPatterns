#pragma once

#include <memory>

namespace Singleton
{
	class WindowManager
	{
	protected:
		WindowManager();

	public:
		static std::shared_ptr<WindowManager> getInstance();

		WindowManager(WindowManager const&) = delete;
		void operator=(WindowManager const&) = delete;
	};
}
