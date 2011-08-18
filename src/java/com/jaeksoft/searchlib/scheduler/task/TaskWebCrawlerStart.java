/**   
 * License Agreement for OpenSearchServer
 *
 * Copyright (C) 2010-2011 Emmanuel Keller / Jaeksoft
 * 
 * http://www.open-search-server.com
 * 
 * This file is part of OpenSearchServer.
 *
 * OpenSearchServer is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 * OpenSearchServer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenSearchServer. 
 *  If not, see <http://www.gnu.org/licenses/>.
 **/

package com.jaeksoft.searchlib.scheduler.task;

import com.jaeksoft.searchlib.Client;
import com.jaeksoft.searchlib.SearchLibException;
import com.jaeksoft.searchlib.config.Config;
import com.jaeksoft.searchlib.crawler.web.process.WebCrawlMaster;
import com.jaeksoft.searchlib.scheduler.TaskAbstract;
import com.jaeksoft.searchlib.scheduler.TaskProperties;

public class TaskWebCrawlerStart extends TaskAbstract {

	@Override
	public String getName() {
		return "Web crawler - start";
	}

	@Override
	public String[] getPropertyList() {
		return null;
	}

	@Override
	public String[] getPropertyValues(Config config, String property) {
		return null;
	}

	@Override
	public int getPropertyCols(Config config, String name) {
		return 50;
	}

	@Override
	public void execute(Client client, TaskProperties properties)
			throws SearchLibException {
		WebCrawlMaster crawlMaster = client.getWebCrawlMaster();
		if (crawlMaster.isRunning())
			return;
		crawlMaster.start();
		crawlMaster.waitForStart(0);
	}

}
