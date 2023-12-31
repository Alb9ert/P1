//              //
// HEADER FILE  //
//              //

// Used for type
enum train_or_plaine
{
    TRAIN = 1,
    AIRPLANE = 2,
};

// Struct for each travel option
typedef struct
{
    char *startDest;
    char *endDest;
    int travelTime;
    double price;
    double co2;
    double distance;
    int wasteTime;
    int totalTime;
    double score;
    int type;
    int rank;

} Traveloption;

//
// Prototypes
//

// Scans user input
void scan_user_input(int *, int *, int *, char *, char *);
void startpoint_and_destination(char *, char *);

// CSV file reader
Traveloption *csv_read(char *, int *, int);

// Finds route and calculates remaining factors
Traveloption *find_route(Traveloption *, char *, char *, int, int *, int *, int *, int);

// print routes
void printRoutes(Traveloption *, Traveloption *, int, int, int);