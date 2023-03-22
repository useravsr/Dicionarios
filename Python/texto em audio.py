from cgitb import text
from gtts import gTTS
# pip install gtts
from playsound import playsound
#pip install play sound

audio = 'speech.mp3'
language = 'en'
sp = gTTS(text= "hello man, you is suave?",
          lang= language, slow= True)

sp.save(audio)
playsound(audio)
