#pragma once
#include <sc2api\sc2_api.h>

namespace Filters {
	bool isResource(const sc2::Unit &);
	bool isMineral(const sc2::Unit &);
	bool isGeiser(const sc2::Unit &);
}