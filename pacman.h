
/* PACMAN.H */

#define DIR_UP     3
#define DIR_DOWN   2
#define DIR_LEFT   1
#define DIR_RIGHT  4
#define NON_DIR    0

#define END_WAY    3

/* phantoms */
#define RED        0
#define PINK       1
#define BLUE       2
#define YELLOW     3

/* guide for phantoms into laberinth*/
#define TOP_LEFT   4
#define TOP_RIGHT  7
#define BOTT_LEFT  5
#define BOTT_RIGHT 6
#define EXIT_HOME  15
#define TOP_HOME   16

/* decisions for phantoms*/
#define CRUX       11  
#define TOP_CRUX   12
#define BOTT_CRUX  13
#define LEFT_CRUX  18
#define RIGHT_CRUX 14

/* jump inter-lab */
#define TUNNEL_L     60 /* code M */
#define TUNNEL_R     61 /* code P */
//#define MAX_TUNNELS  5

/* background */
#define BACKGROUND   232 //0
#define COLOR_PACMAN  226
#define COLOR_DOTS  226

/* Velocity starrings */
#define VEL_PACMAN   40L
#define VEL_RED      37L
#define VEL_PINK     40L
#define VEL_BLUE     40L
#define VEL_YELLOW   41L

/* laberinth colors */
#define LAB_LEVEL1   63
#define LAB_LEVEL2   37 //80
#define LAB_LEVEL3   166
#define LAB_LEVEL4   196
#define LAB_LEVEL5   70 //141

#define LAB_FLASH1   51
#define LAB_FLASH2   255
#define LAB_FLASH3   190
#define LAB_FLASH4   226
#define LAB_FLASH5   255

/* utilities */
#define Is_not(_X_,_A_,_B_,_C_,_D_,_E_,_F_)  _X_!=(_A_) && _X_!=(_B_) && _X_!=(_C_)&&\
                                             _X_!=(_D_) && _X_!=(_E_) && _X_!=(_F_)

// pdir[i]
#define ghost_direction_is(_X_)  pdir[i] == (_X_)
#define ghost_go(_X_)            pdir[i] = (_X_);
#define ghost_found(_X_)         pdots[px+1][py+1] == (_X_)
// pdots[px[i]+1][py[i]+1] == (_X_)
#define pacman_is_down           x > px //[i]
#define pacman_is_to_the_left    y < py //[i]
#define pacman_is_to_the_right   y > py //[i]
#define pacman_is_up             x < px //[i]

/*
const char* letters[3][29]={{" ▀▙","▟  "," ▄▄","  ▟"," ▄▄"," ▟▀"," ▄▄","▟  ","▀"," ▀","▟  ","█ "," ▄ ▄ "," ▄ "," ▄▄ "," ▄▄"," ▄▄","   "," ▄","▄█▄","   ","   ","     ","   ","  ▄","▄▄▄"," ","█▛"," "},
                            {"▟▀▛","▜▀▙","▟  ","▟▀▛","█▀ ","▟▀▀","▟ ▄","█▀▙","▙"," ▟","█▄▀","▜ ","▟ ▀ ▙","▟ ▙","▟  ▛","▟ ▛","▟ █","█▄▀","▀▄"," █ ","█ █","▜ ▛","▜▄█▄▛","▀▄▀","▜▄▛","▄ ▀"," ","▀ "," "},
                            {" ▀ "," ▀ ","▀▀▀"," ▀ "," ▀▀","▀  "," ▀▀","▀ ▀","▀","▄▛","▀ ▀"," ▀","▀   ▀","▀ ▀"," ▀▀ ","█▀ "," ▀█","▀  ","▀ ","  ▀"," ▀ "," ▀ "," ▀ ▀ ","▀ ▀","▄▛ ","▀▀▀"," ","▀ ","▀"}};
*/
const char* letters[3][31]={{" ▄ ","█  "," ▄▄","  █","   "," ▄▄"," ▄▄","█  ","▄"," ▀","▟  ","█ ","     ","   ","    "," ▄▄"," ▄▄","   ","  ","▄█▄","   ","    ","     ","   ","  ▄","   "," ","█▛"," ","▄▀▄"," "},
                            {" ▄▙","█▄ ","▟  "," ▄█","▟█▀","▟▄ ","▟ ▄","█▄ ","▄"," █","█▄▀","█ ","▟▀▄▀▙","▟▀▙","▄▀▀▄","▟ ▛","▟ █","█▄▀","▄▀"," █ ","█ █","▜▙ ▛","▜ ▄ ▛","▀▄▀","▜▄▛","▀▀█"," ","█ "," "," ▄▀"," "},
                            {"▀▄▀","▀▄▀","▀▄▄","▀▄▀","▀▄▄","█  "," █▀","█ ▙","█","▄▛","█▀▙","▀▄","█ ▀ █","█ █","▀▄▄▀","█▀ "," ▀█","█  ","▄▀"," ▀▄","▀▄▀"," ▜▛ "," ▜▀▛ ","▄▀▄","▄▛ ","▄█▄"," ","▄ ","▄"," ▄ ","▛"}};

//                 A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z, ,!,.,?,,
int size_letter[]={3,3,3,3,3,3,3,3,1,2,3,2,5,3,4,3,3,3,2,3,3,4,5,3,3,3,1,2,1,3,1};

const char* letters_C[3][26]={{"▟▀▙","▟▀▙","▟▀▀","█▀▙","▟▀▀","▟▀▀","▟▀▀","█ █","█","  █","█  ","█  ","█▙ ▟█","█▙ █","▟▀▀▙","█▀▙","▟▀▀▙","█▀▙","▟▀▀","▀▀█▀▀","█  █","█  █","█    █","▀▄ ▄▀","▜   ▛","▀▀▀▛"},
                              {"█▄█","█▄▛","█  ","█ █","█▄ ","█▄ ","█ ▄","█▄█","█","  █","█▄▀","█  ","█ ▀ █","█ ▜█","█  █","█▄▛","▜  ▛","█▄▛","▀▀▄","  █  ","█  █","▜  ▛","▜ ▟▙ ▛","  █  "," ▀▄▀ "," ▄▀ "},
                              {"█ █","█▄▛","▜▄▄","█▄▛","▜▄▄","█  ","▜▄▛","█ █","█","▜▄▛","█ █","▜▄▄","█   █","█  █","▜▄▄▛","█  "," ▀▜▙","█ █","▄▄▀","  █  ","▜▄▄▛"," ▜▛ "," ▜▛▜▛ ","▄▀ ▀▄","  █  ","▜▄▄▄"}};

//                   A,B,C,D,E,F, G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z, ,!,. 
int size_letter_C[]={3,3,3,3,3,3, 3,3,1,3,3,3,5,4,4,3,4,3,3,5,4,4,6,5,5,4}; //,1,2,1};


const char *cLedsh[3][10] = {{"┏━┓", " ┓ ", " ━┓", " ━┓","┓ ┓","┏━ ","┏━ "," ━┓","┏━┓","┏━┓"},
                             {"┃ ┃", " ┃ ", "┏━┛", " ━┫","┗━┫","┗━┓","┣━┓","  ┃","┣━┫","┗━┫"},
                             {"┗━┛", " ┻ ", "┗━ ", " ━┛","  ┻"," ━┛","┗━┛","  ┻","┗━┛","  ┻"}};

/*const char *cLedsh[3][10] = {{"╭─╮", " ╮ ", "╭─╮", "╭─╮","┐ ┐","╭─╮","╭─ ","╭─╮","╭─╮","╭─╮"},
                             {"│/│", " │ ", "╭─┘", " ─┤","└─┤","└─╮","├─╮","  │","├─┤","╰─┤"},
                             {"╰─╯", " ┴ ", "╰─╯", "╰─╯","  ┴","╰─╯","╰─╯","  ┴","╰─╯","  ┴"}};*/

/*const char *cLedsh[3][10] = {{"▟▀▙", " █ ", "▟▀▙", "▀▀▙","█ █","▟▀▀","▟▀ ","▀▀█","▟▀▙","▟▀▙"},
                             {"█/█", " █ ", " ▄▛", " ▄▛","▜▄█","▀▀▙","█▀▙"," ▟▛","▜▄▛","▜▄█"},
                             {"▜▄▛", " █ ", "█▄▄", "▄▄▛","  █","▄▄▛","▜▄▛","▟▛ ","▜▄▛"," ▄▛"}};*/


const char *junior[5][4]={{"     ","     ","     ","     "},
                          {"   ┳ ","   ┳ "," ┳   "," ┳   "},
                          {" ▟█▙ ","  ▜▙ "," ▟█▙ "," ▟▛  "},
                          {" ▜█▛ ","  ▟▛ "," ▜█▛ "," ▜▙  "},
                          {"     ","     ","     ","     "}};


const char *pacman[5][5] = {{" ▄▄▄ "," ▄▄▄ "," ▄▄▄ ","     "," ▄▄▄ "},
                            {"▟███▙","  ▜█▙","▟███▙","▟   ▙","▟█▛  "},
                            {"█████","   ██","█▛ ▜█","█▙ ▟█","██   "},
                            {"▜███▛","  ▟█▛","▜   ▛","▜███▛","▜█▙  "},
                            {" ▀▀▀ "," ▀▀▀ ","     "," ▀▀▀ "," ▀▀▀ "}};

///const char *clear_actor[5] = {"     ","     ","     ","     ","     "};

/*const char *pacman[5][8] = {{" ▄▄▄ "," ▄▄▄ "," ▄▄▄ "," ▄▄▄ "," ▄▄▄ ","     "," ▄▄▄ "," ▄▄▄ "},
                            {"▟██▀▙","  ▜▀▙","▟▀██▙","▟▀██▙","▟███▙","▟   ▙","▟▀██▙","▟▀▛  "},
                            {"█████","   ██","█████","█▛ ▜█","█████","█▙ ▟█","█████","██   "},
                            {"▜███▛","  ▟█▛","▜███▛","▜   ▛","▜██▄▛","▜██▄▛","▜███▛","▜█▙  "},
                            {" ▀▀▀ "," ▀▀▀ "," ▀▀▀ ","     "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ "}};

int last_dir_non_zero=1;
*/
const char *mrpacman_death[5][10] = {{"     ","     ","     ","     ","     ","     ","     ","     ","     ","▄   ▄"},
                                     {"▟   ▙","     ","     ","     ","     ","     ","     ","     "," ▄ ▄ ","     "},
                                     {"█▙ ▟█","█▄ ▄█","▄▄ ▄▄","  ▄  ","  ▄  ","  ▄  ","  ▄  ","  ▄  ","     ","     "},
                                     {"▜███▛","▜███▛","▜███▛"," ███ "," ▟█▙ ","  █  ","  █  ","     "," ▄ ▄ ","     "},
                                     {" ▀▀▀ "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ ","     ","     ","     ","▄   ▄"}};

/*
const char *mrpacman_death[5][9] = {{"     ","     ","     ","     ","     ","     ","     ","     ","◢   ◣"},
                                    {"▟   ▙","     ","     ","     ","     ","     ","     "," ◢ ◣ ","     "},
                                    {"█▙ ▟█","█▄ ▄█","▄▄ ▄▄","  ▄  ","  ▄  ","  ▄  ","  ▄  ","  ●  ","  ●  "},
                                    {"▜███▛","▜███▛","▜███▛"," ███ "," ▟█▙ ","  █  ","  █  "," ◥ ◤ ","     "},
                                    {" ▀▀▀ "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ "," ▀▀▀ ","  ▀  ","     ","◥   ◤"}};
*/
//◢ ◣  ◤ ◥
//◥ ◤  ◣ ◢
const char *phantoms[5][5] = {{" ▃▄▃ "," ▃▄▃ "," ▃▄▃ "," ▃▄▃ "},
                              {"▟███▙","▟███▙","▟███▙","▟███▙"},
                              {"█ █ █","█ █ █","█ █ █","█ █ █"},
                              {"█████","█████","█████","█████"},
                              {"█▀█▀█","█▀█▀█","█▀█▀█","█▀█▀█"}};
                              
/*
const char *phantoms[5][5] = {{" ▄▄▄ "," ▄▄▄ "," ▄▄▄ "," ▄▄▄ "},
                              {"▟███▙","▟███▙","▟███▙","▟███▙"},
                              {"█ █ █","█ █ █","█ █ █","█ █ █"},
                              {"█████","█████","█████","█████"},
                              {"█▀█▀█","█▀█▀█","█▀█▀█","█▀█▀█"}};
*/
const char *fruits[3][8] = {{"  ▟▀ ","   ▟▀","  ▟▀ ","  ▟▀ ","   ▟▀","  ▟▀ ","▟▙ ▟▙","  █▀ "},
                            {"▟▙ ▟▙"," ▟█▙ ","▟██▙ ","▟██▙ "," ●●● ","▟██▙ ","▜███▛"," ▟█▀ "},
                            {"▜▛ ▜▛"," ▜█▛ ","▜██▛ ","▜██▛ ","●●●● ","▜██▛ "," ▜█▛ "," ▜▄▛ "}};
                   

int color_fruit[2][8] =    {{ 82, 82, 82, 82, 82, 82,196,123},
                            {126,226, 76,208,207,196,196,159}};

int point_fruit[8] = {150,300,500,700,1000,1500,2000,3000};


int dots[101][76];
int pdots[101][76];
int pdir[4]={DIR_DOWN, DIR_LEFT, DIR_RIGHT, DIR_UP};
int pdiri[4]={DIR_DOWN, DIR_LEFT, DIR_RIGHT, DIR_UP};

/*int tleft[MAX_TUNNELS];
int tright[MAX_TUNNELS]; ///={0,0,0,0,0};
int topT=0;*/
 
#define SND_WAKA       0
#define SND_PILLS      1
#define SND_EATGHOST   2
#define SND_SIREN      3

/* estos sonidos necestan un controlador de sonidos */
int sw_sound_p=0;  /* por dfault: Mrs. Pacman */

const char *PAC_EXTRA = "aplay -q dataPacman/mspacman_extrapac.wav </dev/null >/dev/null 2>&1 &";

const char *MSPAC_EAT = "aplay -q dataPacman/mspacman_death.wav </dev/null >/dev/null 2>&1 &";
const char *MRPAC_EAT = "aplay -q dataPacman/mrpacman_death.wav </dev/null >/dev/null 2>&1 &";

const char *EAT_FRUIT = "aplay -q dataPacman/pacman_eatfruit.wav </dev/null >/dev/null 2>&1 &";

const char *MSPAC_INIT = "aplay -q dataPacman/mspacman_beginning.wav </dev/null >/dev/null 2>&1 &";
const char *MRPAC_INIT = "aplay -q dataPacman/mrpacman_beginning.wav </dev/null >/dev/null 2>&1 &";

const char* sound[4] = {"aplay -q dataPacman/mspacman_waca2.wav </dev/null >/dev/null 2>&1 &",
                        "aplay -q dataPacman/mspacman_scary_ghost.wav </dev/null >/dev/null 2>&1 &",
                        "aplay -q dataPacman/mspacman_eatghost.wav </dev/null >/dev/null 2>&1 &",
                        "aplay -q dataPacman/mspacman_siren.wav </dev/null >/dev/null 2>&1 &"};

const char* mrsound[4] = {"aplay -q dataPacman/mrpacman_waca1.wav </dev/null >/dev/null 2>&1 &",
                          "aplay -q dataPacman/mrpacman_scary_ghost.wav </dev/null >/dev/null 2>&1 &",
                          "aplay -q dataPacman/mrpacman_eatghost.wav </dev/null >/dev/null 2>&1 &",
                          "aplay -q dataPacman/mrpacman_siren.wav </dev/null >/dev/null 2>&1 &"};


const char* pills[3] =   {"▟█▙","███","▜█▛"};
//const char* pills[3] =   {"◢ ◣"," ● ","◥ ◤"};

/* aquí deben ir más laberintos */
const char* laberinth_files[5] = {"dataPacman/pacman_solid_Lab01.txt",
                                  "dataPacman/pacman_solid_Lab02.txt",
                                  "dataPacman/pacman_solid_Lab03.txt",
                                  "dataPacman/pacman_solid_Lab04.txt",
                                  "dataPacman/pacman_solid_Lab05.txt"
                                  };
/*
const char* laberinth_files[4] = {"tests/dataPacman/pacmanLab01.txt",
                                  "tests/dataPacman/pacmanLab02.txt",
                                  "tests/dataPacman/pacmanLab03.txt",
                                  "tests/dataPacman/pacmanLab04.txt"};
*/
const char* laberinth_dots[5] = {"dataPacman/pacmanDot01.txt",
                                 "dataPacman/pacmanDot02.txt",
                                 "dataPacman/pacmanDot03.txt",
                                 "dataPacman/pacmanDot04.txt",
                                 "dataPacman/pacmanDot05.txt"
                                 };

const char* laberinth_ghost_dots[5] = {"dataPacman/phantomDots01.txt",
                                       "dataPacman/phantomDots02.txt",
                                       "dataPacman/phantomDots03.txt",
                                       "dataPacman/phantomDots04.txt",
                                       "dataPacman/phantomDots05.txt"
                                       };

/* prototipos */
void put_big_message(char *msg, int nColorF, int nColorB);
void show_point(int x, int y, int points/*, char *lab, int px[], int py[]*/);
int analize_for_left_direction( int x, int y, int px, int py, int pprob, int i );
int analize_for_right_direction( int x, int y, int px, int py, int pprob, int i );
int analize_for_up_direction( int x, int y, int px, int py, int pprob, int i );
int analize_for_down_direction( int x, int y, int px, int py, int pprob, int i );

void clear_actor();

void draw_ascii_pacman( int color, int bcolor,int pos, int boca );
void draw_ascii_phantoms( int color, int bcolor,int pos );
void Put_leds(int num, int nColorF, int nColorB);
char* Get_leds(int num, int x, int y);
void print_power_pills(int stpills[], int sw_power_pills, int px[], int py[]);
void print_dots( int colorF, int colorB );
void pone_fruit(int level_fruit);
void quita_fruit();
void pone_miniaturas( int vidas, int level_fruit );
void pone_score(int score, int *sw_extra_active, int * vidas, int level_fruit );
void refresh_score(int score);
char * put_sound( int typeSound );
void kill_sound( char * PID_SOUND );
void kill_all_sounds();
void death_pacman(int x, int y,const char*pacman[5][5]);
int get_total_dots();
void get_loc_power_pills( /*pRDS(int, dots),*/ int pillx[], int pilly[], int *tx, int *ty );
void get_loc_ghost_pos( /*pRDS(int,pdots),*/ int ghostx[], int ghosty[] );
char * prepare_lab_string( char* lab, int high /*, int colorF*/ );
void save_score(int score, int high);
int load_high_score();

void initial_screen();
void pone_ready( int vidas,int inicio, int level_fruit,int px[], int py[], int x, int y );
void game_over();
void play_Act(int nAct);


/* EOF */
