from random import choice

players = ["yin","min","xin","xe","yung","xinge","xong"]

print("All players:",players)

teams = ["wols","xinxers","miy","yel"]

teamA=[]
teamB=[]

while len(players)>0:
    playerA=choice(players)
    teamA.append(playerA)
    players.remove(playerA)

    if players==[]:
        break

    playerB=choice(players)
    teamB.append(playerB)
    players.remove(playerB)

team1=choice(teams)
teams.remove(team1)
team2=choice(teams)
teams.remove(team2)


print("Team A:",team1,teamA)
print("Team B:",team2,teamB)
