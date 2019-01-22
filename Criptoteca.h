#ifndef CRIPTOTECA_H_INCLUDED
#define CRIPTOTECA_H_INCLUDED

void Criptografar(FILE *arq, FILE *arq2){
    char c;
    arq2 = fopen("arquivocriptografado.txt", "a");
    if(!arq2){
        perror("Erro! Impossivel abrir o arquivo!\n");
        exit(0);
    }
    while((c = fgetc(arq)) != EOF){
        if(c == ' '){
            fputs("0", arq2);
        }
        else if( c == '!'){
            fputs("1", arq2);
        }
        else if(c == '"'){
            fputs("2", arq2);
        }
        else if(c == '#'){
            fputs("3", arq2);
        }
        else if(c == '$'){
            fputs("4", arq2);
        }
        else if(c == '%'){
            fputs("5", arq2);
        }
        else if(c == '&'){
            fputs("6", arq2);
        }
        else if(c == '´'){
            fputs("7", arq2);
        }
        else if(c == '('){
            fputs("8", arq2);
        }
        else if(c == ')'){
            fputs("9", arq2);
        }
        else if(c == '*'){
            fputs("a", arq2);
        }
        else if(c == '+'){
            fputs("b", arq2);
        }
        else if(c == ','){
            fputs("c", arq2);
        }
        else if(c == '-'){
            fputs("d", arq2);
        }
        else if(c == '.'){
            fputs("e", arq2);
        }
        else if(c == '/'){
            fputs("f", arq2);
        }
        else if(c == '0'){
            fputs("g", arq2);
        }
        else if(c == '1'){
            fputs("h", arq2);
        }
        else if(c == '2'){
            fputs("i", arq2);
        }
        else if(c == '3'){
            fputs("j", arq2);
        }
        else if(c == '4'){
            fputs("k", arq2);
        }
        else if(c == '5'){
            fputs("l", arq2);
        }
        else if(c == '6'){
            fputs("m", arq2);
        }
        else if(c == '7'){
            fputs("n", arq2);
        }
        else if(c == '8'){
            fputs("o", arq2);
        }
        else if(c == '9'){
            fputs("p", arq2);
        }
        else if(c == ':'){
            fputs("q", arq2);
        }
        else if(c == ';'){
            fputs("r", arq2);
        }
        else if(c == '<'){
            fputs("s", arq2);
        }
        else if(c == '='){
            fputs("t", arq2);
        }
        else if(c == '>'){
            fputs("u", arq2);
        }
        else if(c == '?'){
            fputs("v", arq2);
        }
        else if(c == '@'){
            fputs("w", arq2);
        }
        else if(c == 'A'){
            fputs("x", arq2);
        }
        else if(c == 'B'){
            fputs("y", arq2);
        }
        else if(c == 'C'){
            fputs("z", arq2);
        }
        else if(c == 'D'){
            fputs("!", arq2);
        }
        else if(c == 'E'){
            fputs("@", arq2);
        }
        else if(c == 'F'){
            fputs("#", arq2);
        }
        else if(c == 'G'){
            fputs("$", arq2);
        }
        else if(c == 'H'){
            fputs("%", arq2);
        }
        else if(c == 'I'){
            fputs("&", arq2);
        }
        else if(c == 'J'){
            fputs("*", arq2);
        }
        else if(c == 'K'){
            fputs("(", arq2);
        }
        else if(c == 'L'){
            fputs(")", arq2);
        }
        else if(c == 'M'){
            fputs("-", arq2);
        }
        else if(c == 'N'){
            fputs("_", arq2);
        }
        else if(c == 'O'){
            fputs("=", arq2);
        }
        else if(c == 'P'){
            fputs("+", arq2);
        }
        else if(c == 'Q'){
            fputs("{", arq2);
        }
        else if(c == 'R'){
            fputs("}", arq2);
        }
        else if(c == 'S'){
            fputs("[", arq2);
        }
        else if(c == 'T'){
            fputs("]", arq2);
        }
        else if(c == 'U'){
            fputs("?", arq2);
        }
        else if(c == 'V'){
            fputs("/", arq2);
        }
        else if(c == 'W'){
            fputs("|", arq2);
        }
        else if(c == 'X'){
            fputs("<", arq2);
        }
        else if(c == 'Y'){
            fputs(">", arq2);
        }
        else if(c == 'Z'){
            fputs(":", arq2);
        }
        else if(c == '['){
            fputs(";", arq2);
        }
        else if(c == 'ª'){
            fputs("´", arq2);
        }
        else if(c == ']'){
            fputs("`", arq2);
        }
        else if(c == '^'){
            fputs("~", arq2);
        }
        else if(c == '_'){
            fputs("^", arq2);
        }
        else if(c == '`'){
            fputs("ª", arq2);
        }
        else if(c == 'a'){
            fputs("º", arq2);
        }
        else if(c == 'b'){
            fputs("£", arq2);
        }
        else if(c == 'c'){
            fputs("¢", arq2);
        }
        else if(c == 'd'){
            fputs("¬", arq2);
        }
        else if(c == 'e'){
            fputs("§", arq2);
        }
        else if(c == 'f'){
            fputs("A", arq2);
        }
        else if(c == 'g'){
            fputs("B", arq2);
        }
        else if(c == 'h'){
            fputs("C", arq2);
        }
        else if(c == 'i'){
            fputs("D", arq2);
        }
        else if(c == 'j'){
            fputs("E", arq2);
        }
        else if(c == 'k'){
            fputs("F", arq2);
        }
        else if(c == 'l'){
            fputs("G", arq2);
        }
        else if(c == 'm'){
            fputs("H", arq2);
        }
        else if(c == 'n'){
            fputs("I", arq2);
        }
        else if(c == 'o'){
            fputs("J", arq2);
        }
        else if(c == 'p'){
            fputs("K", arq2);
        }
        else if(c == 'q'){
            fputs("L", arq2);
        }
        else if(c == 'r'){
            fputs("M", arq2);
        }
        else if(c == 's'){
            fputs("N", arq2);
        }
        else if(c == 't'){
            fputs("O", arq2);
        }
        else if(c == 'u'){
            fputs("P", arq2);
        }
        else if(c == 'v'){
            fputs("Q", arq2);
        }
        else if(c == 'w'){
            fputs("R", arq2);
        }
        else if(c == 'x'){
            fputs("S", arq2);
        }
        else if(c == 'y'){
            fputs("T", arq2);
        }
        else if(c == 'z'){
            fputs("U", arq2);
        }
        else if(c == '{'){
            fputs("V", arq2);
        }
        else if(c == '|'){
            fputs("W", arq2);
        }
        else if(c == '}'){
            fputs("X", arq2);
        }
        else if(c == '~'){
            fputs("Y", arq2);
        }
        else if(c == 'á'){
            fputs("Z", arq2);
        }
        else if(c == 'é'){
            fputs("ç", arq2);
        }
        else if(c == 'í'){
            fputs("°", arq2);
        }
        else if(c == 'ó'){
            fputs("¹", arq2);
        }
        else if(c == 'ú'){
            fputs("²", arq2);
        }
        else if(c == 'Á'){
            fputs("³", arq2);
        }
        else if(c == 'É'){
            fputs("¨", arq2);
        }
        else if(c == 'Í'){
            fputs("á", arq2);
        }
        else if(c == 'Ó'){
            fputs("é", arq2);
        }
        else if(c == 'Ú'){
            fputs("í", arq2);
        }
        else if(c == 'À'){
            fputs("ó", arq2);
        }
        else if(c == 'ã'){
            fputs("ú", arq2);
        }
        else if(c == 'õ'){
            fputs("ã", arq2);
        }
        else if(c == 'Ã'){
            fputs("õ", arq2);
        }
        else if(c == 'Õ'){
            fputs("à", arq2);
        }
        else if(c == 'â'){
            fputs("â", arq2);
        }
        else if(c == 'ê'){
            fputs("ê", arq2);
        }
        else if(c == 'ô'){
            fputs("ô", arq2);
        }
        else if(c == 'Â'){
            fputs("ü", arq2);
        }
        else if(c == 'Ê'){
            fputs("ä", arq2);
        }
        else if(c == 'Ô'){
            fputs("ï", arq2);
        }
    }
    printf("Arquivo criptografado com sucesso!");
    fclose(arq2);
}

void Decriptografar(FILE *arq2, FILE *arq3){
    char c;
    arq3 = fopen("arquivodecriptografado.txt", "a");
    if(!arq3){
        perror("Erro! Impossivel abrir o arquivo!\n");
        exit(0);
    }
    while((c = fgetc(arq2))!= EOF){
        if(c == '0'){
            fputc(' ', arq3);
        }
        else if(c == '1'){
            fputc('!', arq3);
        }
        else if(c == '2'){
            fputc('"', arq3);
        }
        else if(c == '3'){
            fputc('#', arq3);
        }
        else if(c == '4'){
            fputc('$', arq3);
        }
        else if(c == '5'){
            fputc('%', arq3);
        }
        else if(c == '6'){
            fputc('&', arq3);
        }
        else if(c == '7'){
            fputc('´', arq3);
        }
        else if(c == '8'){
            fputc('(', arq3);
        }
        else if(c == '9'){
            fputc(')', arq3);
        }
        else if(c == 'a'){
            fputc('*', arq3);
        }
        else if(c == 'b'){
            fputc('+', arq3);
        }
        else if(c == 'c'){
            fputc(',', arq3);
        }
        else if(c == 'd'){
            fputc('-', arq3);
        }
        else if(c == 'e'){
            fputc('.', arq3);
        }
        else if(c == 'f'){
            fputc('/', arq3);
        }
        else if(c == 'g'){
            fputc('0', arq3);
        }
        else if(c == 'h'){
            fputc('1', arq3);
        }
        else if(c == 'i'){
            fputc('2', arq3);
        }
        else if(c == 'j'){
            fputc('3', arq3);
        }
        else if(c == 'k'){
            fputc('4', arq3);
        }
        else if(c == 'l'){
            fputc('5', arq3);
        }
        else if(c == 'm'){
            fputc('6', arq3);
        }
        else if(c == 'n'){
            fputc('7', arq3);
        }
        else if(c == 'o'){
            fputc('8', arq3);
        }
        else if(c == 'p'){
            fputc('9', arq3);
        }
        else if(c == 'q'){
            fputc(':', arq3);
        }
        else if(c == 'r'){
            fputc(';', arq3);
        }
        else if(c == 's'){
            fputc('<', arq3);
        }
        else if(c == 't'){
            fputc('=', arq3);
        }
        else if(c == 'u'){
            fputc('>', arq3);
        }
        else if(c == 'v'){
            fputc('?', arq3);
        }
        else if(c == 'w'){
            fputc('@', arq3);
        }
        else if(c == 'x'){
            fputc('A', arq3);
        }
        else if(c == 'y'){
            fputc('B', arq3);
        }
        else if(c == 'z'){
            fputc('C', arq3);
        }
        else if(c == '!'){
            fputc('D', arq3);
        }
        else if(c == '@'){
            fputc('E', arq3);
        }
        else if(c == '#'){
            fputc('F', arq3);
        }
        else if(c == '$'){
            fputc('G', arq3);
        }
        else if(c == '%'){
            fputc('H', arq3);
        }
        else if(c == '&'){
            fputc('I', arq3);
        }
        else if(c == '*'){
            fputc('J', arq3);
        }
        else if(c == '('){
            fputc('K', arq3);
        }
        else if(c == ')'){
            fputc('L', arq3);
        }
        else if(c == '-'){
            fputc('M', arq3);
        }
        else if(c == '_'){
            fputc('N', arq3);
        }
        else if(c == '='){
            fputc('O', arq3);
        }
        else if(c == '+'){
            fputc('P', arq3);
        }
        else if(c == '{'){
            fputc('Q', arq3);
        }
        else if(c == '}'){
            fputc('R', arq3);
        }
        else if(c == '['){
            fputc('S', arq3);
        }
        else if(c == ']'){
            fputc('T', arq3);
        }
        else if(c == '?'){
            fputc('U', arq3);
        }
        else if(c == '/'){
            fputc('V', arq3);
        }
        else if(c == '|'){
            fputc('W', arq3);
        }
        else if(c == '<'){
            fputc('X', arq3);
        }
        else if(c == '>'){
            fputc('Y', arq3);
        }
        else if(c == ':'){
            fputc('Z', arq3);
        }
        else if(c == ';'){
            fputc('[', arq3);
        }
        else if(c == '´'){
            fputc('ª', arq3);
        }
        else if(c == '`'){
            fputc(']', arq3);
        }
        else if(c == '~'){
            fputc('^', arq3);
        }
        else if(c == '^'){
            fputc('_', arq3);
        }
        else if(c == 'ª'){
            fputc('`', arq3);
        }
        else if(c == 'º'){
            fputc('a', arq3);
        }
        else if(c == '£'){
            fputc('b', arq3);
        }
        else if(c == '¢'){
            fputc('c', arq3);
        }
        else if(c == '¬'){
            fputc('d', arq3);
        }
        else if(c == '§'){
            fputc('e', arq3);
        }
        else if(c == 'A'){
            fputc('f', arq3);
        }
        else if(c == 'B'){
            fputc('g', arq3);
        }
        else if(c == 'C'){
            fputc('h', arq3);
        }
        else if(c == 'D'){
            fputc('i', arq3);
        }
        else if(c == 'E'){
            fputc('j', arq3);
        }
        else if(c == 'F'){
            fputc('k', arq3);
        }
        else if(c == 'G'){
            fputc('l', arq3);
        }
        else if(c == 'H'){
            fputc('m', arq3);
        }
        else if(c == 'I'){
            fputc('n', arq3);
        }
        else if(c == 'J'){
            fputc('o', arq3);
        }
        else if(c == 'K'){
            fputc('p', arq3);
        }
        else if(c == 'L'){
            fputc('q', arq3);
        }
        else if(c == 'M'){
            fputc('r', arq3);
        }
        else if(c == 'N'){
            fputc('s', arq3);
        }
        else if(c == 'O'){
            fputc('t', arq3);
        }
        else if(c == 'P'){
            fputc('u', arq3);
        }
        else if(c == 'Q'){
            fputc('v', arq3);
        }
        else if(c == 'R'){
            fputc('w', arq3);
        }
        else if(c == 'S'){
            fputc('x', arq3);
        }
        else if(c == 'T'){
            fputc('y', arq3);
        }
        else if(c == 'U'){
            fputc('z', arq3);
        }
        else if(c == 'V'){
            fputc('{', arq3);
        }
        else if(c == 'W'){
            fputc('|', arq3);
        }
        else if(c == 'X'){
            fputc('}', arq3);
        }
        else if(c == 'Y'){
            fputc('~', arq3);
        }
        else if(c == 'Z'){
            fputc('á', arq3);
        }
        else if(c == 'Ç'){
            fputc('é', arq3);
        }
        else if(c == '°'){
            fputc('í', arq3);
        }
        else if(c == '¹'){
            fputc('ó', arq3);
        }
        else if(c == '²'){
            fputc('ú', arq3);
        }
        else if(c == '³'){
            fputc('Á', arq3);
        }
        else if(c == '¨'){
            fputc('É', arq3);
        }
        else if(c == 'á'){
            fputc('Í', arq3);
        }
        else if(c == 'é'){
            fputc('Ó', arq3);
        }
        else if(c == 'í'){
            fputc('Ú', arq3);
        }
        else if(c == 'ó'){
            fputc('À', arq3);
        }
        else if(c == 'ú'){
            fputc('ã', arq3);
        }
        else if(c == 'ã'){
            fputc('õ', arq3);
        }
        else if(c == 'õ'){
            fputc('Ã', arq3);
        }
        else if(c == 'à'){
            fputc('Õ', arq3);
        }
        else if(c == 'â'){
            fputc('â', arq3);
        }
        else if(c == 'ê'){
            fputc('ê', arq3);
        }
        else if(c == 'ô'){
            fputc('ô', arq3);
        }
        else if(c == 'ü'){
            fputc('Â', arq3);
        }
        else if(c == 'ä'){
            fputc('Ê', arq3);
        }
        else if(c == 'ï'){
            fputc('Ô', arq3);
        }
    }
    printf("Arquivo decriptografado com sucesso!");
    fclose(arq3);
}
#endif // CRIPTOTECA_H_INCLUDED
