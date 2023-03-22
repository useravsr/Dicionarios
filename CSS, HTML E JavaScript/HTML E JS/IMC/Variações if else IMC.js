console.log(getNivelImc(25))


function getNivelImc (imc) {
    const nivel = ['Abaixo do peso', 'Peso normal', 'Sobrepeso',
      'Obesidade grau 1', 'Obesidade grau 2', 'Obesidade grau 3'];
  
    if (imc >= 39.9) return nivel[5];
    if (imc >= 34.9) return nivel[4];
    if (imc >= 29.9) return nivel[3];
    if (imc >= 24.9) return nivel[2];
    if (imc >= 18.5) return nivel[1];
    if (imc < 18.5) return nivel[0];
  }


  if (altura <= 70 || altura >= 240){

    resultado.innerHTML = ("Valores Inválidos!");

} else 
    if (peso <= 30 || peso >= 240) {

        resultado.innerHTML = ("Valores Inválidos");

    }else if (imc < 18.5){

        resultado.innerHTML = (`Abaixo do peso - IMC: ${imc.toFixed(1)}`);

    } else
        if(imc >= 18.5 && imc <= 24.99){

            resultado.innerHTML = (`Peso normal - IMC: ${imc.toFixed(1)}`);

        }else 
            if(imc >= 25 && imc <= 29.99){

                resultado.innerHTML = (`Sobrepeso - IMC: ${imc.toFixed(1)}`);

            }else 
                if(imc >= 30 && imc <= 34.99){

                    resultado.innerHTML = (`Obesidade grau I - IMC: ${imc.toFixed(1)}`);

                }else
                    if(imc >= 35 && imc <= 39.99){

                        resultado.innerHTML = (`Obesidade grau II - IMC: ${imc.toFixed(1)}`);

                    } else 
                        if(imc>=40){

                            resultado.innerHTML = (`Obesidade grau III - IMC: ${imc.toFixed(1)}`);

                        }
  
