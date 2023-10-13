extends Control

onready var healthBar : TextureProgress = get_node("HealthBar")
onready var staminaBar : TextureProgress = get_node("StaminaBar")
onready var ammoText : Label = get_node("AmmoText")
onready var scoreText : Label = get_node("ScoreText")

func update_health_bar (curHp, maxHp):
	
	healthBar.max_value = maxHp
	healthBar.value = curHp

func update_stamina_bar (curStamina, maxStamina):
	
	staminaBar.max_value = maxStamina
	staminaBar.value = curStamina

func update_ammo_text (ammo):
	
	ammoText.text = "Ammo: " + str(ammo)
	
func update_score_text (score):
	
	scoreText.text = "Score: " + str(score)
