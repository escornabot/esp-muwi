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
    var lbl = 'lista de comandos almacenados';
    function atender() {
      if(xhr.readyState === XMLHttpRequest.DONE && xhr.status === 200) {
        comando = xhr.responseText[0];
        lista = document.getElementById('comandos').innerHTML;
        if (lista == lbl)
          lista = '';
        switch (comando) {
          case 'n':
            cmd = "&uarr;";
            break;
          case 'w':
            cmd = "&#8630;";
            break;
          case 'e':
            cmd = "&#8631;";
            break;
          case 's':
            cmd = "&darr;";
            break;
          default:
            cmd = "";
        }
        document.getElementById('comandos').innerHTML = lista + cmd + '&nbsp;';
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
    <div class='circle' id='n'>
      <img role="img" alt="avanzar" src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiIHN0YW5kYWxvbmU9Im5vIj8+PHN2ZyB4bWxuczpzdmc9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA1MCA1MCI+PHBhdGggZD0ibSAyMS42MDI4MjksMzcuNzc1NzUyIC0xZS02LC0xOC4wMjIwMDEgLTMuNTI5LDAgYyAtMC4yNTQsMCAtMC40OCwtMC4xNTQgLTAuNTc2LC0wLjM4NyAtMC4wOTYsLTAuMjMgLTAuMDQxLC0wLjQ5OCAwLjEzNSwtMC42OCBsIDYuOTM4LC02LjkwNCBjIDAuMjQsLTAuMjQgMC42MzMsLTAuMjQgMC44NzUsMC4wMDQgbCA2LjkxNiw2LjkwNCBjIDAuMTg2LDAuMTc4IDAuMjM4LDAuNDQzIDAuMTM1LDAuNjc2IC0wLjA5LDAuMjMyIC0wLjMxOCwwLjM4NyAtMC41NjgsMC4zODcgbCAtMy45MzIsMCAxZS02LDE4LjAyMjAwMSBjIDAsMC4zNDggLTAuMjc3LDAuNjIxIC0wLjYyMSwwLjYyMSBsIC01LjE1MiwwIGMgLTAuMzUyMjI4LC0wLjAwNzIgLTAuNjIxLC0wLjI3OSAtMC42MjEsLTAuNjIxIHoiIGlkPSIwMSIgc3R5bGU9ImZpbGw6I2ZmZmZmZjtmaWxsLW9wYWNpdHk6MTtzdHJva2U6IzAwMDAwMDtzdHJva2Utb3BhY2l0eToxO3N0cm9rZS13aWR0aDowLjU7c3Ryb2tlLW1pdGVybGltaXQ6NDtzdHJva2UtZGFzaGFycmF5Om5vbmUiLz48L3N2Zz4=" onclick='enviar(this.parentElement);' />
    </div><br />
    <div class='circle' id='w'>
      <img role="img" alt="girar a la izquierda" src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiIHN0YW5kYWxvbmU9Im5vIj8+PHN2ZyB4bWxuczpzdmc9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA1MCA1MCI+PHBhdGggZD0ibSAzOC4zOTY3NTEsMzYuMzEwODk0IGMgMCwtMTAuMzUgLTguMjU2LC0xOC44MDcgLTE4LjY0Mjk5OSwtMTkuMTQxIGwgMCwtMy41MjkgYyAwLC0wLjI1NCAtMC4xNTQsLTAuNDggLTAuMzg3LC0wLjU3NiAtMC4yMywtMC4wOTYgLTAuNDk4LC0wLjA0MSAtMC42OCwwLjEzNSBsIC02LjkwNCw2LjkzOCBjIC0wLjI0LDAuMjQgLTAuMjQsMC42MzMgMC4wMDQsMC44NzUgbCA2LjkwNCw2LjkxNiBjIDAuMTc4LDAuMTg2IDAuNDQzLDAuMjM4IDAuNjc2LDAuMTM1IDAuMjMyLC0wLjA5IDAuMzg3LC0wLjMxOCAwLjM4NywtMC41NjggbCAwLC0zLjkzMiBjIDYuNzk5LDAuMjY2IDEyLjI0OTk5OSw1Ljg4MyAxMi4yNDk5OTksMTIuNzk1IDAsMC4zNDggMC4yNzksMC42MjMgMC42MjMsMC42MjMgbCA1LjE0OSwwIGMgMC4zNDQsLTEwZS00IDAuNjIxLC0wLjMyOSAwLjYyMSwtMC42NzEgeiIgaWQ9IjAxIiBzdHlsZT0iZmlsbDojZmZmZmZmO2ZpbGwtb3BhY2l0eToxO3N0cm9rZTojMDAwMDAwO3N0cm9rZS1vcGFjaXR5OjE7c3Ryb2tlLXdpZHRoOjAuNTtzdHJva2UtbWl0ZXJsaW1pdDo0O3N0cm9rZS1kYXNoYXJyYXk6bm9uZSIvPjwvc3ZnPg==" onclick='enviar(this.parentElement);' />
    </div><div class='circle' id='g'>
      <img role="img" alt="ejecutar" src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiIHN0YW5kYWxvbmU9Im5vIj8+PHN2ZyB4bWxuczpzdmc9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA1MCA1MCI+PHBhdGggc3R5bGU9ImZpbGw6I2ZmZmZmZjtmaWxsLW9wYWNpdHk6MTtzdHJva2U6IzAwMDAwMDtzdHJva2Utd2lkdGg6MC41O3N0cm9rZS1taXRlcmxpbWl0OjQ7c3Ryb2tlLWRhc2hhcnJheTpub25lO3N0cm9rZS1vcGFjaXR5OjEiIGQ9Ik0gMzguNjkzNDE3LDI0LjQxNTU2MyAxOC4xMTI3NzQsMTAuMjIyMDE4IEMgMTcuODk0OTA3LDEwLjA3MjI3OSAxNy42MTI0NTEsMTAuMDU2NjY2IDE3LjM3OTY3NywxMC4xNzgwMjUgMTcuMTQ2MTgxLDEwLjMwMDc5NCAxNywxMC41NDIwOTEgMTcsMTAuODA2MDkxIGwgMCwyOC4zODcwOTIgYyAwLDAuMjY0MDAxIDAuMTQ2MiwwLjUwNjAwMSAwLjM3OTY3NywwLjYyODc3NSAwLjEwMzYxOCwwLjA1NDAxIDAuMjE3MTYyLDAuMDgwOTEgMC4zMywwLjA4MDkxIDAuMTQxMjIzLDAgMC4yODE3MzksLTAuMDQyNTUgMC40MDMwOTcsLTAuMTI1NjE2IEwgMzguNjkzNDE3LDI1LjU4MzY5NyBDIDM4Ljg4NTc0NiwyNS40NTA5ODkgMzksMjUuMjMzMTEzIDM5LDI0Ljk5OTYzMiAzOSwyNC43NjYxNDkgMzguODg1MDM2LDI0LjU0ODI4MyAzOC42OTM0MTcsMjQuNDE1NTU4IFoiIGlkPSIwMSIgLz48L3N2Zz4=" onclick='enviar(this.parentElement);' />
    </div><div class='circle' id='e'>
      <img role="img" alt="girar a la derecha" src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiIHN0YW5kYWxvbmU9Im5vIj8+PHN2ZyB4bWxuczpzdmc9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA1MCA1MCI+PHBhdGggZD0ibSAxMS42MDMyNDksMzYuMzEwODk0IGMgMCwtMTAuMzUgOC4yNTYsLTE4LjgwNyAxOC42NDI5OTksLTE5LjE0MSBsIDAsLTMuNTI5IGMgMCwtMC4yNTQgMC4xNTQsLTAuNDggMC4zODcsLTAuNTc2IDAuMjMsLTAuMDk2IDAuNDk4LC0wLjA0MSAwLjY4LDAuMTM1IGwgNi45MDQsNi45MzggYyAwLjI0LDAuMjQgMC4yNCwwLjYzMyAtMC4wMDQsMC44NzUgbCAtNi45MDQsNi45MTYgYyAtMC4xNzgsMC4xODYgLTAuNDQzLDAuMjM4IC0wLjY3NiwwLjEzNSAtMC4yMzIsLTAuMDkgLTAuMzg3LC0wLjMxOCAtMC4zODcsLTAuNTY4IGwgMCwtMy45MzIgYyAtNi43OTksMC4yNjYgLTEyLjI0OTk5OSw1Ljg4MyAtMTIuMjQ5OTk5LDEyLjc5NSAwLDAuMzQ4IC0wLjI3OSwwLjYyMyAtMC42MjMsMC42MjMgbCAtNS4xNDksMCBjIC0wLjM0NCwtMTBlLTQgLTAuNjIxLC0wLjMyOSAtMC42MjEsLTAuNjcxIHoiIGlkPSIwMSIgc3R5bGU9ImZpbGw6I2ZmZmZmZjtmaWxsLW9wYWNpdHk6MTtzdHJva2U6IzAwMDAwMDtzdHJva2Utb3BhY2l0eToxO3N0cm9rZS13aWR0aDowLjU7c3Ryb2tlLW1pdGVybGltaXQ6NDtzdHJva2UtZGFzaGFycmF5Om5vbmUiLz48L3N2Zz4=" onclick='enviar(this.parentElement);' />
    </div><br />
    <div class='circle' id='s'>
      <img role="img" alt="retroceder" src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiIHN0YW5kYWxvbmU9Im5vIj8+PHN2ZyB4bWxuczpzdmc9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA1MCA1MCI+PHBhdGggaWQ9IjAxIiBkPSJtIDI4LjM5NzE3MSwxMi4yMjQyNDggMWUtNiwxOC4wMjIwMDEgMy41MjksMCBjIDAuMjU0LDAgMC40OCwwLjE1NCAwLjU3NiwwLjM4NyAwLjA5NiwwLjIzIDAuMDQxLDAuNDk4IC0wLjEzNSwwLjY4IGwgLTYuOTM4LDYuOTA0IGMgLTAuMjQsMC4yNCAtMC42MzMsMC4yNCAtMC44NzUsLTAuMDA0IGwgLTYuOTE2LC02LjkwNCBjIC0wLjE4NiwtMC4xNzggLTAuMjM4LC0wLjQ0MyAtMC4xMzUsLTAuNjc2IDAuMDksLTAuMjMyIDAuMzE4LC0wLjM4NyAwLjU2OCwtMC4zODcgbCAzLjkzMiwwIC0xZS02LC0xOC4wMjIwMDEgYyAwLC0wLjM0OCAwLjI3NywtMC42MjEgMC42MjEsLTAuNjIxIGwgNS4xNTIsMCBjIDAuMzUyMjI4LDAuMDA3MiAwLjYyMSwwLjI3OSAwLjYyMSwwLjYyMSB6IiBzdHlsZT0iZmlsbDojZmZmZmZmO2ZpbGwtb3BhY2l0eToxO3N0cm9rZTojMDAwMDAwO3N0cm9rZS1vcGFjaXR5OjE7c3Ryb2tlLXdpZHRoOjAuNTtzdHJva2UtbWl0ZXJsaW1pdDo0O3N0cm9rZS1kYXNoYXJyYXk6bm9uZSIgLz48L3N2Zz4=" onclick='enviar(this.parentElement);' />
    </div>
    <div class='cajon' id='comandos'>lista de comandos almacenados</div>
  </div>
</body>
</html>
)";
