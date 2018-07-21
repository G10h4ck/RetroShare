/*******************************************************************************
 * libresapi/api/StatsHandler.h                                                *
 *                                                                             *
 * LibResAPI: API for local socket server                                      *
 *                                                                             *
 * Copyright 2018 by Retroshare Team <retroshare.team@gmail.com>               *
 *                                                                             *
 * This program is free software: you can redistribute it and/or modify        *
 * it under the terms of the GNU Affero General Public License as              *
 * published by the Free Software Foundation, either version 3 of the          *
 * License, or (at your option) any later version.                             *
 *                                                                             *
 * This program is distributed in the hope that it will be useful,             *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                *
 * GNU Affero General Public License for more details.                         *
 *                                                                             *
 * You should have received a copy of the GNU Affero General Public License    *
 * along with this program. If not, see <https://www.gnu.org/licenses/>.       *
 *                                                                             *
 *******************************************************************************/
#ifndef STATSHANDLER_H
#define STATSHANDLER_H

/*
 * simple class to output some basic stats about RS
 * like bandwidth, connected peers, ...
 */

#include "ResourceRouter.h"

namespace resource_api
{

class StatsHandler : public ResourceRouter
{
public:
	StatsHandler();

private:
	void handleStatsRequest(Request& req, Response& resp);
};

} // namespace resource_api

#endif // STATSHANDLER_H
