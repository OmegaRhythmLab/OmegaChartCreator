/**
 * @file occ-recent.h
 * @brief Recent files handling
 * @author werdxz ^v^ lwerdxzl@hotmail.com
 * @version 1.0.0 Alpha
 * @date 2022-11-14
 */
#ifndef OCC_RECENT_H
#define OCC_RECENT_H

#include <common.h>
#include <stdlib.h>
#include <filesystem>
#include <string>
#include <fstream>
#include <vector>




using std::string;

namespace occ{


	struct recentList{
		recentList(string name, string path){
			this->name = name;
			this->path = path;
		};
		string name;
		string path;
		bool valid=false;
	};

	class OCCEXPORT Recent{
		public: 
			Recent();
			~Recent();

			/**
			 * @brief Get the config
			 *
			 * @return 0 if success, -1 if failed
			 */
			int getRecent();

			/**
			 * @brief Set the config
			 *
			 * @return 0 if success, -1 if failed
			 */
			int readRecent();

			/**
			 * @brief write config
			 *
			 * @return 0 if success, -1 if failed
			 */
			int writeRecent();

			/**
			 * @brief Check wheather the dir is a proper project directory
			 *
			 * @return true if it is, false if not
			 */
			const bool checkValid(string path);

			/**
			 * @brief Add a new project to the recent list
			 *
			 * @param name The name of the project
			 * @param path The path of the project
			 *
			 * @return 0 if success, -1 if failed
			 */
			int addRecent(string name, string path);
			/**
			 * @brief remove one form the recent list
			 *
			 * @param name The name of the project
			 * @param path The path of the project
			 *
			 * @return 0 if success, -1 if failed
			 */
			int removeRecent(string path);
			/**
			 * @brief Remove recent config file
			 *
			 * @return 0 if success, -1 if failed
			 */
			int clearRecent();

			/**
			 * @brief Creat a new project
			 *
			 * @param name The name of the project
			 * @param path The path of the project
			 *
			 * @return 0 if success, -1 if failed
			 */
			int createNewProject(string name, string path);

			const std::vector<recentList> getRecentList();
			const int getRecentListSize();

		private:
			std::vector<recentList> recentLists;
			string configPath;
			std::fstream config;
	};

}

#endif // OCC_RECENT_H
