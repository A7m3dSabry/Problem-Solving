/*

Result : 100%

*/



#include <stdio.h>
#include <stdlib.h>

typedef struct Video {
    char *name;
    int unique_views;
} Video;



typedef struct Viewer {
    char *username;
    Video *watched_videos;
    int watched_videos_size;
} Viewer;

////////////////////////////////////////////////////
// Solution

/*
func: match_string
brief: function to compare two strings with each other untill null termination found
*/ 

int match_string(const char *str1,const char *str2){
    while ((*str1!= 0) && (*str2!= 0) ){
        if (*str1 != *str2){
            return 0;
        }
        str1++;
        str2++;
    }
    return ((*str1 == 0) && (*str2 == 0))? 1 : 0;
}

int count_views(Viewer **viewers, int viewers_size, char *video_name)
{
    int count = 0;
    // Waiting to be implemented
    for (int i_viwer = 0 ; i_viwer < viewers_size ; i_viwer++){
        Video *video = viewers[i_viwer]->watched_videos;
        
        for ( int i_vid = 0 ; i_vid < viewers[i_viwer]->watched_videos_size ;i_vid++ ){
            if (match_string(video_name,video[i_vid].name)){
                count++;
            }
        }
    }
    return count;
}

#ifndef RunTests
int main()
{
    
 
    Video videos[] = { {.name = "Soccer", .unique_views = 500},
                      {.name = "Basketball", .unique_views = 1000} };
    Viewer viewer = {.username = "Dave", .watched_videos = videos,
                     .watched_videos_size = 2};
    
    Viewer *viewers[] = { &viewer };
    printf("%d", count_views(viewers, 1, "Soccer")); /* should print 1 */
}
#endif