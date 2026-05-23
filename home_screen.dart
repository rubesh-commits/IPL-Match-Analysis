import 'package:flutter/material.dart';
import 'team_screen.dart';
import 'batsmen_screen.dart';
import 'bowlers_screen.dart';

class HomeScreen extends StatelessWidget {

  const HomeScreen({super.key});

  @override
  Widget build(BuildContext context) {

    return Scaffold(

      backgroundColor: Color(0xFFFAF5F5),

      appBar: AppBar(

        elevation: 0,

        backgroundColor: Colors.deepPurple,

        centerTitle: true,

        title: const Text(
          "IPL Statistics Analysis",

          style: TextStyle(
            fontWeight: FontWeight.bold,
            fontSize: 22,
            color: Colors.white,
          ),
        ),
      ),

      body: Column(

        children: [

          // TOP HEADER DESIGN

          Container(

            width: double.infinity,
            padding: const EdgeInsets.all(25),

            decoration: const BoxDecoration(

              color: Colors.deepPurple,

              borderRadius: BorderRadius.only(
                bottomLeft: Radius.circular(30),
                bottomRight: Radius.circular(30),
              ),
            ),

            child: const Column(

              children: [

                Icon(
                  Icons.emoji_events,
                  color: Colors.white,
                  size: 55,
                ),

                SizedBox(height: 10),

                Text(
                  "IPL Dashboard",

                  style: TextStyle(
                    color: Colors.white,
                    fontSize: 24,
                    fontWeight: FontWeight.bold,
                  ),
                ),

                SizedBox(height: 8),

                Text(
                  "Analyze teams and player performance",

                  style: TextStyle(
                    color: Colors.white70,
                    fontSize: 15,
                  ),
                ),
              ],
            ),
          ),

          // GRID SECTION

          Expanded(

            child: Padding(

              padding: const EdgeInsets.all(50),

              child: GridView.count(

                crossAxisCount: 2,

                crossAxisSpacing: 18,
                mainAxisSpacing: 18,

                childAspectRatio: 1.75,

                children: [

                  dashboardCard(
                    context,
                    title: "Team Analysis",
                    icon: Icons.groups,
                    color: Colors.blue,
                    screen: const TeamScreen(),
                  ),

                  dashboardCard(
                    context,
                    title: "Top Batsmen",
                    icon: Icons.sports_cricket,
                    color: Colors.orange,
                    screen: const BatsmenScreen(),
                  ),

                  dashboardCard(
                    context,
                    title: "Top Bowlers",
                    icon: Icons.sports_baseball,
                    color: Colors.green,
                    screen: const BowlersScreen(),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget dashboardCard(
    BuildContext context, {

    required String title,
    required IconData icon,
    required Color color,
    required Widget screen,
  }) {

    return GestureDetector(

      onTap: () {

        Navigator.push(
          context,
          MaterialPageRoute(
            builder: (_) => screen,
          ),
        );
      },

      child: Container(

        decoration: BoxDecoration(

          gradient: LinearGradient(
            colors: [
              color.withOpacity(0.9),
              color,
            ],

            begin: Alignment.topLeft,
            end: Alignment.bottomRight,
          ),

          borderRadius: BorderRadius.circular(22),

          boxShadow: [

            BoxShadow(
              color: color.withOpacity(0.3),
              blurRadius: 10,
              offset: const Offset(2, 5),
            ),
          ],
        ),

        child: Column(

          mainAxisAlignment: MainAxisAlignment.center,

          children: [

            CircleAvatar(

              radius: 28,

              backgroundColor: Colors.white.withOpacity(0.2),

              child: Icon(
                icon,
                size: 32,
                color: Colors.white,
              ),
            ),

            const SizedBox(height: 16),

            Text(
              title,

              textAlign: TextAlign.center,

              style: const TextStyle(
                color: Colors.white,
                fontSize: 17,
                fontWeight: FontWeight.bold,
              ),
            ),
          ],
        ),
      ),
    );
  }
}