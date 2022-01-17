#include "PathData.hpp"

namespace data
{

    PathDataManager::PathDataManager()
    {

    }

    std::string PathDataManager::GetPath(std::string key)
    {
        
        for(int i = 0; i < pathData.size(); i++)
        {
            PathData* currPathData = &pathData[i]; 

            if(currPathData->key == key)
                return currPathData->path;
        
        }

        return NULL;

    }

}