import pandas as pd
from metrics import (
    top_run_scorers,
    top_wickets_takers,
    team_wins,
    strike_rate,
    batting_average,
    economy
)
from visualizations import (
    plot_top_batsmen,
    plot_top_bowlers,
    plot_team_wins,
    plot_batting_average,
    plot_strike_rate,
    plot_economy
)

df = pd.read_csv("IPL.csv")

print("\n========TOP PERFORMANCE========\n")
wins = team_wins(df)
print(wins.head(10))

print("\n========TOP RUN SCORES========\n")
top_batsmen = top_run_scorers(df)
print(top_batsmen.head(10))

print("\n========TOP BATTING AVERAGE========\n")
avg = batting_average(df)
print(avg.head(10))

print("\n========TOP STRIKE RATE========\n")
sr = strike_rate(df)
print(sr.head(10))

print("\n========TOP WICKET TAKERS========\n")
top_bowlers = top_wickets_takers(df)
print(top_bowlers.head(10))

print("\n========TOP ECONOMY========\n")
eco = economy(df)
print(eco.head(10))

plot_top_batsmen(top_batsmen)
plot_strike_rate(sr)
plot_batting_average(avg)
plot_top_bowlers(top_bowlers)
plot_economy(eco)
plot_team_wins(wins)