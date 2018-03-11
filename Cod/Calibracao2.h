#ifndef CALIBRACAO2_H
#define CALIBRACAO2_H

#include <robo_hardware.h> 
#include <Servo.h>
#include "SensorDeCor.h"
#include "Refletancia.h"
#include "Inout.h" //	>> Inclusão da nova classe.
 
class Calibracao2 {
	
private:
	Matematica calcule;
	calibracao_dados cali;

	
	bool realizarCali;
	
	const char SAIDA = 'S'; 
	
	//void esperarParaLer();   inout.ler...();
	void calibrarBranco();
	void calibrarPreto();
	
	void calibrarCor();
	void calibrarCorPreto();
	void calibrarCorBranco();
	void calibrarVerde();
	void calibrarCinza();
	
	char escolhaInicial;
	char escolhaMenu;
	char escolhaBrancoPreto;

	char escolhaPreto;
	char escolhaBranco;
	
	char escolhaCor;
	char controlador;
   
  
public:
 
	Calibracao2();

	void Menu_calibrar();
	void lerCalibracao();
	
protected: 
	Refletancia refletancia_dir, refletancia_dir2, refletancia_esq, refletancia_esq2;
	SensorDeCor corDireito, corEsquerdo;
};

#endif