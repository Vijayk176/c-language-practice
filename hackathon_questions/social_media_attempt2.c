#include <stdio.h>

// Define the structure for SocialMediaPost
typedef struct {
    int postID;
    char postContent[500];
    int numLikes;
    int numComments;
    int numShares;
} SocialMediaPost;

// Function to input a single post's data
void inputPostData(SocialMediaPost *post) {
    printf("Enter Post ID: ");
    scanf("%d", &post->postID);
    getchar(); // To consume the newline character after scanf
    printf("Enter Post Content: ");
    fgets(post->postContent, sizeof(post->postContent), stdin);
    // Manual removal of the newline character
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

// Function to display all post analytics
void displayPostAnalytics(SocialMediaPost *posts, int count) {
    printf("\nPost Analytics:\n");
    for (int i = 0; i < count; i++) {
        printf("Post ID: %d\n", posts[i].postID);
        printf("Content: %s\n", posts[i].postContent);
        printf("Likes: %d, Comments: %d, Shares: %d\n\n",
               posts[i].numLikes, posts[i].numComments, posts[i].numShares);
    }
}

// Function to save posts to a file
void saveToFile(SocialMediaPost *posts, int count) {
    FILE *file = fopen("Filename.txt", "w");
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
    printf("Data successfully saved to file");
}

// Function to load posts from a file
int loadFromFile(SocialMediaPost *posts) {
    FILE *file = fopen("Filename.txt", "r");
    if (file == NULL) {
        printf("No existing data found. Starting fresh.\n");
        return 0;
    }
    int count = 0;
    while (fscanf(file, "%d\n", &posts[count].postID) != EOF) {
        fgets(posts[count].postContent, sizeof(posts[count].postContent), file);
        for (int i = 0; posts[count].postContent[i] != '\0'; i++) {
            if (posts[count].postContent[i] == '\n') {
                posts[count].postContent[i] = '\0';
                break;
            }
        }
        fscanf(file, "%d\n%d\n%d\n", &posts[count].numLikes, &posts[count].numComments, &posts[count].numShares);
        count++;
    }
    fclose(file);
    printf("Loaded %d post(s) from file", count);
    return count;
}

int main() {
    SocialMediaPost posts[100]; // Array to store up to 100 posts
    int postCount = loadFromFile(posts); // Load existing data from file
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

