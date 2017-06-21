#include "Cuenta.h"

Cuenta::Cuenta(string nombre,string username,string password,vector<Cuenta*>* perteneceA){
	this->nombre=nombre;
	this->username=username;
	this->password=password;
	this->perteneceA=perteneceA;
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