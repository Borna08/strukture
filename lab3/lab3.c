int trazi(pozicija p, char prez[MAXDUZINA]) {

	int n = 1;

	while (p != NULL) {
		if (!strcmp(p->prezime, prez)) {
			printf("clan se nalazi na poziciji broj:%d ", n);
			return 1;
		}
		n++;
		p = p->next;
	}
	printf("clan ne postoji");

	return -1;
}

int brisi(pozicija p, char imef[MAXDUZINA]) {



	while (p->next->next != NULL) {
		pozicija temp = NULL;
		if (p->next != NULL && !strcmp(p->next->ime, imef)) {
			temp = p->next;
			p->next = p->next->next;
			free(temp);
			return 1;
		}

		p = p->next;

	}
	printf("clan ne postoji");
	return -1;
}

int upisiza(pozicija p, char ime[MAXDUZINA], char prez[MAXDUZINA], int god, char imef[MAXDUZINA]) {

	pozicija novi = NULL;


	while (p != NULL) {
		if (!strcmp(p->ime, imef)) {
			novi = (pozicija)malloc(sizeof(osoba));
			if (novi == NULL) {
				printf("greška pri alociranju memorije");
				return -1;
			}

			novi->next = p->next;
			p->next = novi;
			strcpy(novi->ime, ime);
			strcpy(novi->prezime, prez);
			novi->god = god;
			return 1;

		}

		p = p->next;
	}
	if (p == NULL) {
		printf("clan ne postoji");
		return -1;
	}





}

int upisispred(pozicija p, char ime[MAXDUZINA], char prez[MAXDUZINA], int god, char imef[MAXDUZINA]) {

	pozicija novi = NULL;
	pozicija prosli = NULL;


	while (p != NULL) {
		if (!strcmp(p->ime, imef)) {
			novi = (pozicija)malloc(sizeof(osoba));
			if (novi == NULL) {
				printf("greška pri alociranju memorije");
				return -1;
			}


			novi->next = prosli->next;
			prosli->next = novi;



			strcpy(novi->ime, ime);
			strcpy(novi->prezime, prez);
			novi->god = god;
			return 1;

		}
		prosli = p;
		p = p->next;

	}
	if (p == NULL) {
		printf("clan ne postoji");
		return -1;
	}

}

int sort(pozicija p) {

	for (int i = 0; (p + i) != NULL; i++) {

	}
}