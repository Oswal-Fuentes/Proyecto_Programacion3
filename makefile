Main: Main.o Cancion.o Radio.o Explicit.o En_vivo.o Cover.o Album.o Single.o Album_completo.o Recopilatorio.o Playlist.o Favoritos.o Normal.o Cuenta.o Cuenta_normal.o Cuenta_premium.o Artista.o Solista.o Banda.o Region.o Continente.o Pais.o Dispositivo.o Tablet.o PC.o Movil.o Persona.o 
	g++ Main.o Cancion.o Radio.o Explicit.o En_vivo.o Cover.o Album.o Single.o Album_completo.o Recopilatorio.o Playlist.o Favoritos.o Normal.o Cuenta.o Cuenta_normal.o Cuenta_premium.o Artista.o Solista.o Banda.o Region.o Continente.o Pais.o Dispositivo.o Tablet.o PC.o Movil.o Persona.o -o Main

Main.o: Main.cpp Cancion.h Radio.h Explicit.h En_vivo.h Cover.h Album.h Single.h Album_completo.h Recopilatorio.h Playlist.h Favoritos.h Normal.h Cuenta.h Cuenta_normal.h Cuenta_premium.h Artista.h Solista.h Banda.h Region.h Continente.h Pais.h Dispositivo.h Tablet.h PC.h Movil.h Persona.h 
	g++ -c Main.cpp
 
Cancion.o: Cancion.cpp Cancion.h 
	g++ -c Cancion.cpp 
 
Radio.o:  Radio.h Radio.cpp Cancion.h 
	g++ -c Radio.cpp 
 
Explicit.o:  Explicit.h Explicit.cpp Cancion.h 
	g++ -c Explicit.cpp 
 
En_vivo.o:  En_vivo.h En_vivo.cpp Cancion.h 
	g++ -c En_vivo.cpp 
 
Cover.o:  Cover.h Cover.cpp Cancion.h 
	g++ -c Cover.cpp 
 
Album.o: Album.cpp Album.h 
	g++ -c Album.cpp 
 
Single.o:  Single.h Single.cpp Album.h 
	g++ -c Single.cpp 
 
Album_completo.o:  Album_completo.h Album_completo.cpp Album.h 
	g++ -c Album_completo.cpp 
 
Recopilatorio.o:  Recopilatorio.h Recopilatorio.cpp Album.h 
	g++ -c Recopilatorio.cpp 
 
Playlist.o: Playlist.cpp Playlist.h 
	g++ -c Playlist.cpp 
 
Favoritos.o:  Favoritos.h Favoritos.cpp Playlist.h 
	g++ -c Favoritos.cpp 
 
Normal.o:  Normal.h Normal.cpp Playlist.h 
	g++ -c Normal.cpp 
 
Cuenta.o: Cuenta.cpp Cuenta.h 
	g++ -c Cuenta.cpp 
 
Cuenta_normal.o:  Cuenta_normal.h Cuenta_normal.cpp Cuenta.h 
	g++ -c Cuenta_normal.cpp 
 
Cuenta_premium.o:  Cuenta_premium.h Cuenta_premium.cpp Cuenta.h 
	g++ -c Cuenta_premium.cpp 
 
Artista.o: Artista.cpp Artista.h 
	g++ -c Artista.cpp 
 
Solista.o:  Solista.h Solista.cpp Artista.h 
	g++ -c Solista.cpp 
 
Banda.o:  Banda.h Banda.cpp Artista.h 
	g++ -c Banda.cpp 
 
Region.o: Region.cpp Region.h 
	g++ -c Region.cpp 
 
Continente.o:  Continente.h Continente.cpp Region.h 
	g++ -c Continente.cpp 
 
Pais.o:  Pais.h Pais.cpp Region.h 
	g++ -c Pais.cpp 
 
Dispositivo.o: Dispositivo.cpp Dispositivo.h 
	g++ -c Dispositivo.cpp 
 
Tablet.o:  Tablet.h Tablet.cpp Dispositivo.h 
	g++ -c Tablet.cpp 
 
PC.o:  PC.h PC.cpp Dispositivo.h 
	g++ -c PC.cpp 
 
Movil.o:  Movil.h Movil.cpp Dispositivo.h 
	g++ -c Movil.cpp 
 
Persona.o: Persona.cpp Persona.h 
	g++ -c Persona.cpp  
 
clean: 
	rm -f *.0 *.main
