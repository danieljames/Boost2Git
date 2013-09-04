/*
 *  Copyright (C) 2013 Daniel Pfeifer <daniel@pfeifer-mail.de>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OPTIONS_HPP
#define OPTIONS_HPP

#include <string>
#include <unordered_map>
#include <regex>
#include <boost/property_tree/ptree.hpp>

struct Options
  {
  bool add_metadata;
  bool add_metadata_notes;
  bool dry_run;
  bool debug_rules;
  bool coverage;
  int commit_interval;
  bool svn_branches;
  std::string rules_file;
  std::string git_executable;
  std::string gitattributes_text;
  boost::property_tree::ptree gitattributes_tree;
  std::vector<std::pair<std::regex, boost::property_tree::ptree::iterator>> glob_cache;
  };

extern Options options;

#endif /* OPTIONS_HPP */
