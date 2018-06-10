#pragma once
#include "CCarta.h"


using namespace System;
using namespace System::Drawing;


public ref class CMazo {
private:
	Graphics ^ canvas;
	array<CCarta^> ^cartas;
	int in;
public:
	CMazo(Graphics^ canvas) {
		in = 50;
		cartas = gcnew array<CCarta^>(55);
		this->canvas= canvas;
	//Rellenando cartas azules	
	for (int i = 0; i <= 12; i++) {
		switch (i+1) {
		case 1:cartas[i] = gcnew CCarta(0, i, "imagenes/blue_0.png"); break;
		case 2:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_1.png"); break;
		case 3:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_2.png"); break;
		case 4:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_3.png"); break;
		case 5:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_4.png"); break;
		case 6:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_5.png"); break;
		case 7:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_6.png"); break;
		case 8:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_7.png"); break;
		case 9:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_8.png"); break;
		case 10:cartas[i] = gcnew CCarta(0, i,"imagenes/blue_9.png"); break;
		case 11:cartas[i] = gcnew CCarta(0, 20, "imagenes/blue_picker.png"); break;
		case 12:cartas[i] = gcnew CCarta(0, 20, "imagenes/blue_reverse.png"); break;
		case 13:cartas[i] = gcnew CCarta(0, 20, "imagenes/blue_skip.png"); break;
		}
	}
	//Rellenando cartas verdes
	for (int i = 0; i <= 12; i++) {
		int n = i + 13;
		switch (i + 1) {
		case 1:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_0.png"); break;
		case 2:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_1.png"); break;
		case 3:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_2.png"); break;
		case 4:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_3.png"); break;
		case 5:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_4.png"); break;
		case 6:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_5.png"); break;
		case 7:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_6.png"); break;
		case 8:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_7.png"); break;
		case 9:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_8.png"); break;
		case 10:cartas[i + 13] = gcnew CCarta(1, i, "imagenes/green_9.png"); break;
		case 11:cartas[i + 13] = gcnew CCarta(1, 20, "imagenes/green_picker.png"); break;
		case 12:cartas[i + 13] = gcnew CCarta(1, 20, "imagenes/green_reverse.png"); break;
		case 13:cartas[i + 13] = gcnew CCarta(1, 20, "imagenes/green_skip.png"); break;
		}
	}
	//Rellenando cartas rojas
	for (int i = 0; i <= 12; i++) {
		switch (i + 1) {
		case 1:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_0.png"); break;
		case 2:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_1.png"); break;
		case 3:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_2.png"); break;
		case 4:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_3.png"); break;
		case 5:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_4.png"); break;
		case 6:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_5.png"); break;
		case 7:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_6.png"); break;
		case 8:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_7.png"); break;
		case 9:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_8.png"); break;
		case 10:cartas[i + 26] = gcnew CCarta(2, i, "imagenes/red_9.png"); break;
		case 11:cartas[i + 26] = gcnew CCarta(2, 20, "imagenes/red_picker.png"); break;
		case 12:cartas[i + 26] = gcnew CCarta(2, 20, "imagenes/red_reverse.png"); break;
		case 13:cartas[i + 26] = gcnew CCarta(2, 20, "imagenes/red_skip.png"); break;
		}
	}
	//Rellenando amarillas
	for (int i = 0; i <= 12; i++) {
		switch (i + 1) {
		case 1:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_0.png"); break;
		case 2:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_1.png"); break;
		case 3:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_2.png"); break;
		case 4:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_3.png"); break;
		case 5:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_4.png"); break;
		case 6:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_5.png"); break;
		case 7:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_6.png"); break;
		case 8:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_7.png"); break;
		case 9:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_8.png"); break;
		case 10:cartas[i + 39] = gcnew CCarta(3, i, "imagenes/yellow_9.png"); break;
		case 11:cartas[i + 39] = gcnew CCarta(3, 20, "imagenes/yellow_picker.png"); break;
		case 12:cartas[i + 39] = gcnew CCarta(3, 20, "imagenes/yellow_reverse.png"); break;
		case 13:cartas[i + 39] = gcnew CCarta(3, 20, "imagenes/yellow_skip.png"); break;
		}
	}
	//Metiendo dos especiales
	cartas[52] = gcnew CCarta(4, 50, "imagenes/wild_color_changer.png");
	cartas[53] = gcnew CCarta(4, 50, "imagenes/wild_pick_four.png");
	//Detalle de carta
	cartas[54] = gcnew CCarta(5, 0, "imagenes/card_back.png");
	}
	void shufle() {	}
	void dibujarmazo() {
		
		for (int i = 0; i <=54; i++) {
			cartas[i]->setPosX(in);
			cartas[i]->setPosY(in);
			cartas[i]->dibujar(canvas);
			in++;
		}
		in = 50;
	}
	~CMazo() {
		}
	//void setCantidad(int cantidad) { this->cantidad = cantidad; }
	
	//int getCantidad() { return this->cantidad; }
	
	void repartir() {};
	void cogercarta() {
		int n;
		
		do {
			cartas[4]->setPosX(in + n);
			cartas[4]->dibujar(canvas);
			n++;
		} while (n < 300);
	};
};