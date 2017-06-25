#include <ncurses.h>
#include <string>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Cancion.h"
#include "Album.h"
#include "Playlist.h"
#include "Cuenta.h"
#include "Artista.h"
#include "Region.h"
#include "Dispositivo.h"
#include "Persona.h"
#include "Radio.h"
#include "Explicit.h"
#include "En_vivo.h"
#include "Cover.h"
#include "Single.h"
#include "Album_completo.h"
#include "Recopilatorio.h"
#include "Normal.h"
#include "Cuenta_normal.h"
#include "Cuenta_premium.h"
#include "Solista.h"
#include "Banda.h"
#include "Socialista.h"
#include "Democratica.h"
#include "Tablet.h"
#include "PC.h"
#include "Movil.h"
#include "Spotify.h"

using namespace std;

int main(){
	Spotify spotify;
	spotify.run();
	return 0;
}