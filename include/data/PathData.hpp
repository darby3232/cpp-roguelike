#ifndef PATHDATA
#define PATHDATA

#include <iostream>
#include <vector>

namespace data
{
    struct PathData
    {
        std::string key;
        std::string path;
    };

    class PathDataManager
    {

    private:
        std::vector<PathData> pathData; 
    public:
        PathDataManager();
        std::string GetPath(std::string key);

    };

}

#endif