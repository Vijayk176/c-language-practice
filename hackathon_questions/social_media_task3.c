#include <stdio.h>
#define FILE_NAME "Social_Media_Records.txt"

typedef struct {
    int postID;
    char postContent[500];
    int numLikes;
    int numComments;
    int numShares;
} SocialMediaPost;

void inputPostData(SocialMediaPost *post) {
    printf("Enter Post ID: ");
    scanf("%d", &post->postID);
    getchar(); 
    printf("Enter Post Content: ");
    fgets(post->postContent, sizeof(post->postContent), stdin);
    
    for (int i = 0; post->postContent[i] != '\0'; i++) {
        if (post->postContent[i] == '\n') {
            post->postContent[i] = '\0';
            break;
        }
    }
    printf("Enter Number of Likes: ");
    scanf("%d", &post->numLikes);
    printf("Enter Number of Comments: ");
    scanf("%d", &post->numComments);
    printf("Enter Number of Shares: ");
    scanf("%d", &post->numShares);
}

void displayPostAnalytics(SocialMediaPost *posts, int count) {
    printf("\nPost Analytics:\n");
    for (int i = 0; i < count; i++) {
        printf("Post ID: %d\n", posts[i].postID);
        printf("Content: %s\n", posts[i].postContent);
        printf("Likes: %d, Comments: %d, Shares: %d\n\n",
               posts[i].numLikes, posts[i].numComments, posts[i].numShares);
    }
}


void saveToFile(SocialMediaPost *posts, int count) {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\n%s\n%d\n%d\n%d\n",
                posts[i].postID, posts[i].postContent,
                posts[i].numLikes, posts[i].numComments, posts[i].numShares);
    }
    fclose(file);
    printf("Data successfully saved to '%s'.\n", FILE_NAME);
}


int loadFromFile(SocialMediaPost *posts) {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("No existing data found. Starting fresh.\n");
        return 0;
    }
    int j = 0;
    while (fscanf(file, "%d\n", &posts[j].postID) != EOF) {
        fgets(posts[j].postContent, sizeof(posts[j].postContent), file);
        for (int i = 0; posts[j].postContent[i] != '\0'; i++) {
            if (posts[j].postContent[i] == '\n') {
                posts[j].postContent[i] = '\0';
                break;
            }
        }
        fscanf(file, "%d\n%d\n%d\n", &posts[j].numLikes, &posts[j].numComments, &posts[j].numShares);
        j++;
    }
    fclose(file);
    printf("Loaded %d post(s) from '%s'.\n", j, FILE_NAME);
    return j;
}

int main() {
    SocialMediaPost posts[100]; 
    int postCount = loadFromFile(posts); 
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Input Social Media Post Data\n");
        printf("2. Analyze Post Analytics\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (postCount < 100) {
                    inputPostData(&posts[postCount]);
                    postCount++;
                } else {
                    printf("Error: Maximum number of posts reached.\n");
                }
                break;

            case 2:
                if (postCount > 0) {
                    displayPostAnalytics(posts, postCount);
                } else {
                    printf("No posts to analyze.\n");
                }
                break;

            case 3:
                saveToFile(posts, postCount);
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

