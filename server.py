from fastapi import FastAPI
from fastapi.middleware.cors import CORSMiddleware
import pandas as pd

from metrics import (
    team_wins,
    top_run_scorers,
    top_wickets_takers,
    economy,
    strike_rate, 
    batting_average
)

app = FastAPI()

app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"]
)

df = pd.read_csv("IPL.csv")

@app.get("/")
def home():
    return {
        "message": "IPL Match Statistics Analysis"
    }

@app.get("/team-wins")
def get_team_wins():
    wins = team_wins(df)

    return wins.head(10).to_dict()

@app.get("/top-batsmen")
def get_top_batsmen():
    batsmen = top_run_scorers(df)

    return batsmen.head(10).to_dict()

@app.get("/top-bowlers")
def get_top_bowlers():
    bowlers = top_wickets_takers(df)

    return bowlers.head(10).to_dict()

@app.get("/batting-average")
def get_batting_average():
    average = batting_average(df)

    return average.head(10).round(2).to_dict()

@app.get("/strike-rate")
def get_strike_rate():
    sr = strike_rate(df)

    return sr.head(10).round(2).to_dict()

@app.get("/economy-rate")
def get_economy_rate():
    eco = economy(df)

    return eco.head(10).round(2).to_dict()
