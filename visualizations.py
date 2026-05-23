import matplotlib.pyplot as plt

def plot_top_batsmen(top_batsmen):
    plt.figure(figsize=(10, 6))

    top_batsmen.head(10).plot(kind='bar')

    for i, value in enumerate(top_batsmen.head(10)):
        plt.text(i, value, str(value), ha='center', va='bottom').set_fontsize(20)

    plt.title("Top 10 batters in IPL(2008-2026)").set_fontsize(20)
    plt.xlabel("Batsmen").set_fontsize(20)
    plt.ylabel("Runs").set_fontsize(20)

    plt.xticks(rotation=45, fontsize=18)
    plt.yticks(fontsize=18)

    plt.tight_layout()
    plt.show()

def plot_top_bowlers(top_bowlers):
    plt.figure(figsize=(10, 6))

    top_bowlers.head(10).plot(kind='bar')

    for i, value in enumerate(top_bowlers.head(10)):
        plt.text(i, value, str(value), ha='center', va='bottom').set_fontsize(20)

    plt.title("Top 10 bowlers in IPL(2008-2026)").set_fontsize(20)
    plt.xlabel("Bowler").set_fontsize(20)
    plt.ylabel("Wickets").set_fontsize(20)

    plt.xticks(rotation=45, fontsize=18)
    plt.yticks(fontsize=18)

    plt.tight_layout()
    plt.show()

def plot_team_wins(wins):
    plt.figure(figsize=(8, 8))

    wins.head(8).plot(
        kind='pie',
        autopct='%1.1f%%'
    )

    plt.title("Team Win Distribution(2008-2026)").set_fontsize(20)
    plt.ylabel("").set_fontsize(20)
    plt.tight_layout()
    plt.show()

def plot_batting_average(avg):
    plt.figure(figsize=(10, 6))

    avg.head(10).plot(kind='bar')

    for i, value in enumerate(avg.head(10)):
        plt.text(i, value, f"{value:.2f}", ha='center', va='bottom').set_fontsize(20)

    plt.title("Top 10 Batting Average(2008-2026)").set_fontsize(20)
    plt.xlabel("Batsmen").set_fontsize(20)
    plt.ylabel("Average").set_fontsize(20)

    plt.xticks(rotation=45, fontsize=18)
    plt.yticks(fontsize=18)
    plt.tight_layout()
    plt.show()

def plot_strike_rate(sr):
    plt.figure(figsize=(10, 6))

    sr.head(10).plot(kind='bar')

    for i, value in enumerate(sr.head(10)):
        plt.text(i, value, f"{value:.2f}", ha='center', va='bottom').set_fontsize(20)

    plt.title("Top 10 Batting Strike Rate(2008-2026)").set_fontsize(20)
    plt.xlabel("Batsmen").set_fontsize(20)
    plt.ylabel("Strike Rate").set_fontsize(20)

    plt.xticks(rotation=45, fontsize=18)
    plt.yticks(fontsize=18)
    plt.tight_layout()
    plt.show()
    
def plot_economy(eco):
    plt.figure(figsize=(10, 6))

    eco.head(10).plot(kind='bar')

    for i, value in enumerate(eco.head(10)):
        plt.text(i, value, f"{value:.2f}", ha='center', va='bottom').set_fontsize(20)
    
    plt.title("Top 10 Economy Rate(2008-2026)").set_fontsize(20)
    plt.xlabel("Bowlers").set_fontsize(20)
    plt.ylabel("Economy").set_fontsize(20)

    plt.xticks(rotation=45, fontsize=18)
    plt.yticks(fontsize=18)
    plt.tight_layout()
    plt.show()