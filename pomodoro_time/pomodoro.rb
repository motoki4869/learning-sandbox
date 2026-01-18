require './timer_base'

#ポモドロークラス
class Pomodoro < TimerBase
  MINUTES = 25
  def initialize(minutes: MINUTES)
    super
  end
end
