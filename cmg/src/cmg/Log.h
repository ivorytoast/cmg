#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Cmg {

	class CMG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

#define CMG_CORE_TRACE(...)   ::Cmg::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CMG_CORE_INFO(...)    ::Cmg::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CMG_CORE_WARN(...)    ::Cmg::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CMG_CORE_ERROR(...)   ::Cmg::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CMG_CORE_FATAL(...)   ::Cmg::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define CMG_TRACE(...)        ::Cmg::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CMG_INFO(...)         ::Cmg::Log::GetClientLogger()->info(__VA_ARGS__)
#define CMG_WARN(...)         ::Cmg::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CMG_ERROR(...)        ::Cmg::Log::GetClientLogger()->error(__VA_ARGS__)
#define CMG_FATAL(...)        ::Cmg::Log::GetClientLogger()->fatal(__VA_ARGS__)