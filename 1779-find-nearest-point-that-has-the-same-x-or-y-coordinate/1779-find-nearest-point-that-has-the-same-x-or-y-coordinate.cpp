class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int result=100000,index=-1;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x ||points[i][1]==y)
            {
                int z=abs(points[i][0]-x)+ abs(points[i][1]-y);
                if(result>z)
                {
                    result=z;
                    index=i;
                }
            }
            
        }
        return index;
    }
};