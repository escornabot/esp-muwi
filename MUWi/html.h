R"(
<!DOCTYPE html>
<html lang='es'>
<head>
  <meta http-equiv='Content-Type' content='text/html; charset=utf-8'>
  <title>Mando Universal WiFi Escornabot</title>
  <style>
    body {margin:0;padding:0;text-align:center;font-family:sans-serif;}
    .box {margin:0 auto;padding:1.79% 2%;line-height:0;}
    @media screen and (orientation:landscape){.box{height:95vh;width:85vh;}}
    @media screen and (orientation:portrait){.box{height:95vw;width:85vw;}}
    h1{font-size:6vmin;}
    .circle {border-radius:50%;border:1px black solid;display:inline-block;margin:1.79% 2%;width:28%;height:25%;color:white;cursor:pointer;}
    #n { background:blue;}
    #e { background:green;}
    #w { background:red;}
    #s { background:black;}
    #g { background:white;}
    .cajon {margin-top:2%;font-size:3.5vmin;border: 1px gray solid;height:4vmin;line-height:4vmin;color:gray;}
    noscript{color:red;}
    noscript h1{font-size:10vmin;}
    noscript h2{font-size:5vmin;}
    noscript hr{margin:10%;border:2px solid red;}
  </style>
  <script type='text/javascript' >
    var xhr = new XMLHttpRequest();
    var lbl = 'lista de comandos';
    function atender() {
      if(xhr.readyState === XMLHttpRequest.DONE && xhr.status === 200) {
        comando = xhr.responseText[0];
        lista = document.getElementById('comandos').innerHTML;
        if (lista == lbl)
          lista = '';
        document.getElementById('comandos').innerHTML = lista + comando + '&nbsp;';
        if (comando == 'g')
          document.getElementById('comandos').innerHTML = lbl;
      }
    }
    xhr.onreadystatechange = atender;
    function enviar(control) {
      xhr.open('GET', 'accion?comando=' + control.id);
      xhr.send();
    }
  </script>
</head>
<body>
  <noscript>
    <h1>JavaScript DESACTIVADO</h1>
    <h2>este mando lo necesita para funcionar :(</h2>
    <hr />
  </noscript>
  <div class='box'>
    <h1>MUWi Escornabot</h1> 
    <div class='circle' id='n' onclick='enviar(this);'></div><br />
    <div class='circle' id='w' onclick='enviar(this);'></div><div class='circle' id='g' onclick='enviar(this);'></div><div class='circle' id='e' onclick='  enviar(this);'></div><br />
    <div class='circle' id='s' onclick='enviar(this);'></div>
    <div class='cajon' id='comandos'>lista de comandos</div>
  </div>
</body>
</html>
)";
