import pandas as pd

df = pd.read_csv("IPL.csv")

def team_wins(df):
    matches = df.drop_duplicates(subset="match_id")
    wins = matches['match_won_by'].value_counts()
    return wins

def top_run_scorers(df):
    top_batsmen = (
        df.groupby('batter')['runs_batter']
        .sum()
        .sort_values(ascending=False)
    )
    return top_batsmen

def top_wickets_takers(df):
    top_bowlers  = (
        df.groupby('bowler')['bowler_wicket']
        .sum()
        .sort_values(ascending=False)
    )
    return top_bowlers

def batting_average(df):
    runs = df.groupby('batter')['runs_batter'].sum()

    dismissals = (
        df[df['player_out'].notna()]
        .groupby('player_out')
        .size()
    )

    average = runs / dismissals
    average = average.sort_values(ascending=False)
    return average

def strike_rate(df):
    runs = df.groupby('batter')['runs_batter'].sum()
    balls = df.groupby('batter')['balls_faced'].sum()

    sr = (runs/balls) * 100
    sr = sr.sort_values(ascending=False)
    return sr

def economy(df):
    runs_given = df.groupby('bowler')['runs_bowler'].sum()
    balls = df.groupby('bowler').size()

    overs = balls / 6
    eco = runs_given / overs
    eco = eco.sort_values()
    return eco
