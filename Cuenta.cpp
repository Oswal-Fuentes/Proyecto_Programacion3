#include "Cuenta.h"

Cuenta::Cuenta(string nombre,string username,string password,int dinero,string id){
	this->nombre=nombre;
	this->username=username;
	this->password=password;
	this->dinero=dinero;
	this->id=id;
}
Cuenta::Cuenta(){

}
void Cuenta::setNombre(string nombre){
	this-> nombre=nombre;
}
string Cuenta::getNombre(){
	return nombre;
}
void Cuenta::setUsername(string username){
	this-> username=username;
}
string Cuenta::getUsername(){
	return username;
}
void Cuenta::setPassword(string password){
	this-> password=password;
}
string Cuenta::getPassword(){
	return password;
}
vector<Cancion*> Cuenta::getFavoritos() {
	return favoritos;
}
void Cuenta::setFavoritos(vector<Cancion*>favoritos) {
	this->favoritos = favoritos;
}
vector<Cancion*> Cuenta::getHistorial() {
	return historial;
}
void Cuenta::setHistorial(vector<Cancion*>historial) {
	this->historial = historial;
}
vector<Playlist*> Cuenta::getPlaylists() {
	return playlists;
}
void Cuenta::setPlaylists(vector<Playlist*>playlists) {
	this->playlists = playlists;
}
void Cuenta::addFavorito(Cancion* cancion){
	favoritos.push_back(cancion);
}
void Cuenta::addHistorial(Cancion* cancion){
	historial.push_back(cancion);
}
void Cuenta::addPlaylist(Playlist* playlist){
	playlists.push_back(playlist);
}
void Cuenta::setPersona(Persona* persona){
	this->persona=persona;
}
Persona* Cuenta::getPersona(){
	return persona;
}
Cuenta::~Cuenta(){
	delete persona;
}
string Cuenta::getTipo(){
	return "sinTipo";
}