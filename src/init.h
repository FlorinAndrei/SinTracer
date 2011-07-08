typedef struct
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
} pixel;

pixel frame[1000][1000];

typedef struct
{
	double mag;				/* brightness in magnitude numbers */
	unsigned long temp;		/* temperature in K */
	double latit;			/* sky latitude of center */
	double longit;			/* sky longitude */
	double radius;			/* apparent size of the disk (fake) */
} star;

star cosmos[9110];


void init_frame (void);
