from kivy.app import App
from kivy.uix.button import Button


class LanguageLearnerApp(App):
  def build(self):
    return Button(text='Hello World',
    pos=(50,100),
    size_hint=(None,None),
    size=(300,200))


if __name__ == '__main__':
  LanguageLearnerApp().run()


from kivy.app import App
from kivy.uix.button import Button


class FunkyButton(Button):
  def __init__(self, **kwargs):
        super(FunkyButton, self).__init__(**kwargs)
        self.text='Funky button'
        self.pos=(100,100)
        self.size_hint=(.25,.25)


class LanguageLearnerApp(App):
  def build(self):
    # return FunkyButton(
    #   text='hello world',
    #   pos=(100,100),
    #   size_hint=(.5,.5)
    # )
    return FunkyButton()


if __name__ == '__main__':
  LanguageLearnerApp().run()


from kivy.app import App
from kivy.uix.button import Button


class FunkyButton(Button):
  def __init__(self, **kwargs):
        super(FunkyButton, self).__init__(**kwargs)
        self.text='Funky button'
        self.pos=(100,100)
        self.size_hint=(.25,.25)


class LanguageLearnerApp(App):
  def build(self):
    return FunkyButton(
      pos=(100,100),
      size_hint=(None,None),
      size=(500,500)
    )


if __name__ == '__main__':
  LanguageLearnerApp().run()

from kivy.app import App
from kivy.uix.button import Button
from kivy.uix.widget import Widget
from kivy.uix.label import Label
from kivy.properties import StringProperty, NumericProperty

class GameScreen(Widget):
  label_text = StringProperty('')
  numeric = NumericProperty(0)
 
  def __init__(self, **kwargs):
    super(GameScreen, self).__init__(**kwargs)
    self.label_text = "Here is some text"
    self.numeric = 10


class LanguageLearnerApp(App):
  def build(self):
    game_screen = GameScreen()
    return game_screen


if __name__ == '__main__':
  LanguageLearnerApp().run()